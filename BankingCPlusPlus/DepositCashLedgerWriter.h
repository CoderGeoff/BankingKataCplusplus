#pragma once
#include "ILedgerWriter.h"
class DepositCashLedgerWriter : public ILedgerWriter
{
public:
	DepositCashLedgerWriter();
	virtual ~DepositCashLedgerWriter();
};

