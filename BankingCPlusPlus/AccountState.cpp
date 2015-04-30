#include "stdafx.h"
#include "AccountState.h"
#include "IAccountSummaryReader.h"

AccountState::AccountState(int currentBalanceInPence)
{
	m_CurrentBalanceInPence = currentBalanceInPence;
}

AccountState *AccountState::OpenNew()
{
	return new AccountState(0);
}

void AccountState::ReadCurrentBalance(IAccountSummaryReader& reader)
{
	reader.CurrentBalance(m_CurrentBalanceInPence);
}

AccountState* AccountState::Credit(int amountInPence)
{
	return new AccountState(m_CurrentBalanceInPence + amountInPence);
}

