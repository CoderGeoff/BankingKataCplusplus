#pragma once

class IAccountSummaryReader;

class AccountState
{
public:
	static AccountState* OpenNew();
	void ReadCurrentBalance(IAccountSummaryReader& reader);
	AccountState* Credit(int amountInPence);
private:
	AccountState(int currentBalanceInPence);

	int m_CurrentBalanceInPence;
};

