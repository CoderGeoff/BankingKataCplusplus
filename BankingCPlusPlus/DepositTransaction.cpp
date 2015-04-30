#include "stdafx.h"
#include "DepositTransaction.h"
#include "AccountState.h"


DepositTransaction::DepositTransaction(std::unique_ptr<ILedgerWriter> ledgerWriter, std::unique_ptr<IBusinessRules> rules) :
	m_LedgerWriter(std::move(ledgerWriter)),
	m_BusinessRules(std::move(rules))
{
}

TransactionOutcome DepositTransaction::Execute(AccountState& account, int amountToDepositInPence)
{
	if (m_BusinessRules->IsntAllowed(account, amountToDepositInPence))
	{
		// do something
	}
	auto newState = account.Credit(amountToDepositInPence);
	return TransactionOutcome(std::shared_ptr<AccountState>(newState));
}
