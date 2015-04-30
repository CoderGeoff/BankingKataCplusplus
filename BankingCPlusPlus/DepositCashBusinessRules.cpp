#include "stdafx.h"
#include "DepositCashBusinessRules.h"


bool DepositCashBusinessRules::IsntAllowed(const Account& account, int amountToDepositInPence) const
{
	return amountToDepositInPence > 0;
}
