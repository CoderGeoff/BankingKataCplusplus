// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"
#include "IAccountSummaryReader.h"
#include "BankingCplusPlus.h"

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
	auto reader = std::make_shared<AccountSummaryReaderStub>();
	ReadAccountSummary(reader);
	EXPECT_EQ(30, reader->CurrentBalance());
}