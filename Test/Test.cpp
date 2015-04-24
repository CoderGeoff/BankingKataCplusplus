// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "IAccountSummaryReader.h"
#include "BankingCplusPlus.h"

#include <fakeit.hpp>

using namespace fakeit;

class AccountSummaryReaderStub : public IAccountSummaryReader
{
	int m_CurrentBalanceInPence;
public: 
	AccountSummaryReaderStub() : m_CurrentBalanceInPence(0) {}
	int CurrentBalance() const { return m_CurrentBalanceInPence; };
	virtual void CurrentBalance(int currentBalanceInPence)
	{
		m_CurrentBalanceInPence = currentBalanceInPence;
	}
};

TEST(AccountSummaryTest, ShouldReadCurrentBalance)
{
	// Arrange
	Mock<IAccountSummaryReader> mockReader;
	IAccountSummaryReader& reader = mockReader.get();
	When(Method(mockReader, CurrentBalance)).Return();
	When(Method(mockReader, LastTransaction)).Return();

	// Act
	ReadAccountSummary(reader);

	// Assert
	Verify(Method(mockReader, CurrentBalance).Using(30.0)).Exactly(Once);
}

TEST(AccountSummaryTest, ShouldReadLastTransaction)
{
	// Arrange
	Mock<IAccountSummaryReader> mockReader;
	IAccountSummaryReader& reader = mockReader.get();
	When(Method(mockReader, CurrentBalance)).Return();
	When(Method(mockReader, LastTransaction)).Return();

	// Act
	ReadAccountSummary(reader);

	// Assert
	Verify(Method(mockReader, LastTransaction)).Exactly(Once);
}