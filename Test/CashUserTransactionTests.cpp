#include "stdafx.h"
#include "gtest/gtest.h"
#include "BankingCplusPlus.h"
#include "ITransactionReceiptReader.h"
#include "TransactionReceipt.h"

#include <fakeit.hpp>

using namespace fakeit;

TEST(CashUserTransactionTest, ShouldDepositTenPounds)
{
	// Arrange
	Mock<ITransactionReceiptReader> reader;
	When(Method(reader, Successful)).Return();
	When(Method(reader, Amount)).Return();

	// Act
	TransactionReceipt receipt = DepositCash(1000);
	receipt.Read(reader.get());

	// Assert
	auto methodCalled = Method(reader, Amount).Using("1000");
	Verify(methodCalled).Exactly(Once);
}
