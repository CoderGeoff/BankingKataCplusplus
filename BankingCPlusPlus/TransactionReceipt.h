#pragma once
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

class ITransactionReceiptReader;

class BANKINGCPLUSPLUS_API TransactionReceipt
{
public:
	void Read(ITransactionReceiptReader& reader) const;
};

