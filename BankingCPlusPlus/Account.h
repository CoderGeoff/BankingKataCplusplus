#pragma once

class IAccountSummaryReader;

class Account
{
public:
	static Account* OpenNew();
	void ReadCurrentBalance(IAccountSummaryReader& reader);
private:
	Account(int currentBalanceInPence);

	int m_CurrentBalanceInPence;
};

