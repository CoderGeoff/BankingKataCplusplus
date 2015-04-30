#pragma once

class IAccountSummaryReader;

class Account
{
public:
	static Account* OpenNew();
	void ReadCurrentBalance(IAccountSummaryReader& reader);
	Account* Credit(int amountInPence);
private:
	Account(int currentBalanceInPence);

	int m_CurrentBalanceInPence;
};

