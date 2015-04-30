#pragma once
class Account;
class IBusinessRules
{
public:
	virtual ~IBusinessRules() = 0;
	virtual bool IsntAllowed(const Account&, int amountInPence) const = 0;
};

