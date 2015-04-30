#include "stdafx.h"
#include "gtest/gtest.h"
#include "BankingCplusPlus.h"
#include "MockAccountSummaryReader.h"
#include "TransactionReceipt.h"

#include <gmock/gmock.h>
using ::testing::A;
using ::testing::An;
using ::testing::AtLeast;
using ::testing::Return;

TEST(CashTest, WhenCashIsDeposited_ItShouldBeAddedToTheCurrentBalance)
{
	// Arrange
	MockAccountSummaryReader reader;
	AccountHandle account = OpenAccount();

	// Act
	const int depositAmount = 1;
	DepositCash(account, depositAmount);

	// Assert
	EXPECT_CALL(reader, CurrentBalance(depositAmount))
		.Times(1)
		.WillOnce(Return());
	ReadAccountSummary(account, reader);
}

TEST(CashTest, WhenCashIsDepositedTwice_BothShouldBeAddedToTheCurrentBalance)
{
	// Arrange
	MockAccountSummaryReader reader;
	AccountHandle account = OpenAccount();

	// Act
	const int depositAmount1 = 1;
	const int depositAmount2 = 2;
	DepositCash(account, depositAmount1);
	DepositCash(account, depositAmount2);

	// Assert
	EXPECT_CALL(reader, CurrentBalance(depositAmount1 + depositAmount2))
		.Times(1)
		.WillOnce(Return());
	ReadAccountSummary(account, reader);
}