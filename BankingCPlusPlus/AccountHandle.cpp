#include "stdafx.h"
#include "AccountHandle.h"

AccountHandle::AccountHandle(AccountState& account)
{
	m_Account = &account;
}

AccountState& AccountHandle::Get()
{
	return *m_Account;
}

void AccountHandle::Set(AccountState& account)
{
	m_Account = &account;
}