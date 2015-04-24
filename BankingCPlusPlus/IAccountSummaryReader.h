#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

BANKINGCPLUSPLUS_API class IAccountSummaryReader
{
public:
	virtual void CurrentBalance(int balanceInPence) = 0;

};

