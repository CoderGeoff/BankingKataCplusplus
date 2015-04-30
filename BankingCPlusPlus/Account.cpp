#include "stdafx.h"
#include "Account.h"
#include "IAccountSummaryReader.h"

Account::Account(int currentBalanceInPence)
{
	m_CurrentBalanceInPence = currentBalanceInPence;
}

Account *Account::OpenNew()
{
	return new Account(0);
}

void Account::ReadCurrentBalance(IAccountSummaryReader& reader)
{
	reader.CurrentBalance(m_CurrentBalanceInPence);
}

Account* Account::Credit(int amountInPence)
{
	return new Account(m_CurrentBalanceInPence + amountInPence);
}

