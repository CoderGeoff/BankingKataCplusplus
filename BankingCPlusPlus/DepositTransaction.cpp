#include "stdafx.h"
#include "DepositTransaction.h"


DepositTransaction::DepositTransaction(std::unique_ptr<ILedgerWriter> ledgerWriter, std::unique_ptr<IBusinessRules> rules) :
	m_LedgerWriter(std::move(ledgerWriter)),
	m_BusinessRules(std::move(rules))
{
}


TransactionReceipt DepositTransaction::Execute()
{
	TransactionReceipt receipt;
	return receipt;
}
