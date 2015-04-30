#include "stdafx.h"
#include "TransactionOutcome.h"

TransactionOutcome::TransactionOutcome(std::shared_ptr<AccountState> account) :
	m_AccountState(account)
{
}

std::shared_ptr<AccountState>& TransactionOutcome::FinalAccountState()
{
	return m_AccountState; 
}
