#include "stdafx.h"
#include "AccountHandle.h"

AccountHandle::AccountHandle(Account& account)
{
	m_Account = &account;
}

Account& AccountHandle::Get()
{
	return *m_Account;
}
