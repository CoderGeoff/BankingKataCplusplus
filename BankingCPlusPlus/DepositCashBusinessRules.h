#pragma once
#include "IBusinessRules.h"
class Account;

class DepositCashBusinessRules : public IBusinessRules
{
public:
	virtual bool IsntAllowed(const AccountState& account, int amountToDepositInPence) const;
};

