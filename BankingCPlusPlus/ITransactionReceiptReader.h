#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

#include <string>

class BANKINGCPLUSPLUS_API ITransactionReceiptReader
{
public:
	virtual void Successful(bool successful) const = 0;
	virtual void Amount(const std::string& amount) const = 0;
};

