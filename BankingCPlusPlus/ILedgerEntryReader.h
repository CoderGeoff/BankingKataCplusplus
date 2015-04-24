#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

#include <string>

BANKINGCPLUSPLUS_API class ILedgerEntryReader
{
public:
	virtual void Date(const std::string& date) = 0;
	virtual void Description(const std::string& type) = 0;
	virtual void Amount(const std::string& amount) = 0;
};

