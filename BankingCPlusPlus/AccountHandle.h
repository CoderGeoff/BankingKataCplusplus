#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

class Account; 
class IAccountSummaryReader;
BANKINGCPLUSPLUS_API class AccountHandle
{
public:
	AccountHandle(Account& account);
	friend BANKINGCPLUSPLUS_API void ReadAccountSummary(AccountHandle account, IAccountSummaryReader& reader);

private:
	Account& Get();
	Account* m_Account;
};


