#include "stdafx.h"
#include "gtest/gtest.h"
#include "BankingCplusPlus.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "MockTransactionReceiptReader.h"
#include "TransactionReceipt.h"

using ::testing::AtLeast;
using ::testing::Return;



TEST(CashUserTransactionTest, ShouldDepositTenPounds)
{
	// Arrange
	MockTransactionReceiptReader reader;
	EXPECT_CALL(reader, Amount(std::string("1000")))
		.Times(1)
		.WillOnce(Return());

	// Act
	TransactionReceipt receipt = DepositCash(1000);
	receipt.Read(reader);
}
