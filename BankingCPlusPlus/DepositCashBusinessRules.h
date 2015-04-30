#pragma once
#include "IBusinessRules.h"
class Account;

class DepositCashBusinessRules : public IBusinessRules
{
public:
	virtual bool IsntAllowed(const Account& account, int amountToDepositInPence) const;
};

