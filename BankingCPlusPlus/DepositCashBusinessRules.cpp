#include "stdafx.h"
#include "DepositCashBusinessRules.h"


bool DepositCashBusinessRules::IsntAllowed(const AccountState& account, int amountToDepositInPence) const
{
	return amountToDepositInPence > 0;
}
