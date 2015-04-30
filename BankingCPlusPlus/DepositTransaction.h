#pragma once
#include <memory>
#include "TransactionReceipt.h"
#include "IBusinessRules.h"
#include "ILedgerWriter.h"

class ILedgerWriter;
class IBusinessRules;

class DepositTransaction
{
public:
	DepositTransaction(std::unique_ptr<ILedgerWriter> ledgerWriter, std::unique_ptr<IBusinessRules> rules);
	TransactionReceipt Execute();
private:
	std::unique_ptr<ILedgerWriter> m_LedgerWriter;
	std::unique_ptr<IBusinessRules>  m_BusinessRules;
};
