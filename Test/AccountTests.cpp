#include "stdafx.h"
#include "gtest/gtest.h"
#include "BankingCplusPlus.h"
#include "MockAccountSummaryReader.h"

#include <gmock/gmock.h>
using ::testing::A;
using ::testing::An;
using ::testing::AtLeast;
using ::testing::Return;

TEST(AccountTest, NewAccountShouldHaveZeroBalance)
{
	// Arrange
	MockAccountSummaryReader reader;

	// Set Expectation
	const int zeroBalance = 0;
	EXPECT_CALL(reader, CurrentBalance(zeroBalance))
		.Times(1)
		.WillOnce(Return());

	// Act
	AccountHandle account = OpenAccount();

	// Assert
	ReadAccountSummary(account, reader);
}
