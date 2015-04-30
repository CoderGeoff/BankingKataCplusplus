#pragma once
class AccountState;
class IBusinessRules
{
public:
	virtual ~IBusinessRules() = 0;
	virtual bool IsntAllowed(const AccountState&, int amountInPence) const = 0;
};

