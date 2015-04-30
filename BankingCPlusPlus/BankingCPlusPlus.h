// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the BANKINGCPLUSPLUS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// BANKINGCPLUSPLUS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BANKINGCPLUSPLUS_EXPORTS
#define BANKINGCPLUSPLUS_API __declspec(dllexport)
#else
#define BANKINGCPLUSPLUS_API __declspec(dllimport)
#endif

#include "AccountHandle.h"

class IAccountSummaryReader;
class TransactionReceipt;

BANKINGCPLUSPLUS_API AccountHandle OpenAccount();
BANKINGCPLUSPLUS_API void ReadAccountSummary(AccountHandle handle, IAccountSummaryReader& reader);
BANKINGCPLUSPLUS_API TransactionReceipt DepositCash(AccountHandle handle, int amountInPence);

extern BANKINGCPLUSPLUS_API int nBankingCPlusPlus;

BANKINGCPLUSPLUS_API int fnBankingCPlusPlus(void);
