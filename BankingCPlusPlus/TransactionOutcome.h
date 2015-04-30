#pragma once
#include <memory>

#include "AccountState.h"

class TransactionOutcome
{
	std::shared_ptr<AccountState> m_AccountState;
public:
	TransactionOutcome(std::shared_ptr<AccountState> account);
	std::shared_ptr<AccountState>& FinalAccountState();
};

