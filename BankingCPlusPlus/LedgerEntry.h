#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

#include <string>

class ILedgerEntryReader;

BANKINGCPLUSPLUS_API class LedgerEntry
{
public:
	void Read(ILedgerEntryReader* reader) const;
};

