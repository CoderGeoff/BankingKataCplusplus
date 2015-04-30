#include "stdafx.h"
#include "DepositTransaction.h"
#include "Account.h"


DepositTransaction::DepositTransaction(std::unique_ptr<ILedgerWriter> ledgerWriter, std::unique_ptr<IBusinessRules> rules) :
	m_LedgerWriter(std::move(ledgerWriter)),
	m_BusinessRules(std::move(rules))
{
}

TransactionReceipt DepositTransaction::Execute(Account& account, int amountToDepositInPence)
{
	if (m_BusinessRules->IsntAllowed(account, amountToDepositInPence))
	{
		// do something
	}
	Account* newAccount = account.Credit(amountToDepositInPence);
	TransactionReceipt receipt;
	return receipt;
}
