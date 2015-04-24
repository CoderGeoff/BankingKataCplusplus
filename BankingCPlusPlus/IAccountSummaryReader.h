#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

class LedgerEntry;

class BANKINGCPLUSPLUS_API IAccountSummaryReader
{
public:
	virtual void CurrentBalance(int balanceInPence) = 0;
	virtual void LastTransaction(const LedgerEntry* ledgerEntry) = 0;
};

