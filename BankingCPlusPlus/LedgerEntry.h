#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

class ILedgerEntryReader;

class BANKINGCPLUSPLUS_API LedgerEntry
{
public:
	void Read(ILedgerEntryReader* reader) const;
};

