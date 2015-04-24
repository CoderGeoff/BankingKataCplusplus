// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "IAccountSummaryReader.h"
#include "BankingCplusPlus.h"

#include <fakeit.hpp>

using namespace fakeit;

TEST(AccountSummaryTest, ShouldReadCurrentBalance)
{
	// Arrange
	Mock<IAccountSummaryReader> reader;
	When(Method(reader, CurrentBalance)).Return();
	When(Method(reader, LastTransaction)).Return();

	// Act
	ReadAccountSummary(reader.get());

	// Assert
	Verify(Method(reader, CurrentBalance).Using(30.0)).Exactly(Once);
}

TEST(AccountSummaryTest, ShouldReadLastTransaction)
{
	// Arrange
	Mock<IAccountSummaryReader> reader;
	When(Method(reader, CurrentBalance)).Return();
	When(Method(reader, LastTransaction)).Return();

	// Act
	ReadAccountSummary(reader.get());

	// Assert
	Verify(Method(reader, LastTransaction)).Exactly(Once);
}