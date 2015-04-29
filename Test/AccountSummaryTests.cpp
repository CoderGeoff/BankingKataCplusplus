#include "stdafx.h"
#include "gtest/gtest.h"
#include "BankingCplusPlus.h"
#include "MockAccountSummaryReader.h"

#include <gmock/gmock.h>
using ::testing::A;
using ::testing::AtLeast;
using ::testing::Return;

TEST(AccountSummaryTest, ShouldReadCurrentBalance)
{
	// Arrange
	MockAccountSummaryReader reader;
	const int testBalance = 1;

	// Set Expectation
	EXPECT_CALL(reader, CurrentBalance(30))
		.Times(1)
		.WillOnce(Return());

	// Act
	ReadAccountSummary(reader);
}

TEST(AccountSummaryTest, ShouldReadLastTransaction)
{
	// Arrange
	MockAccountSummaryReader reader;
	const int testBalance = 1;

	// Set Expectation
	EXPECT_CALL(reader, LastTransaction(A<const LedgerEntry*>()))
		.Times(1)
		.WillOnce(Return());

	// Act
	ReadAccountSummary(reader);
}