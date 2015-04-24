// BankingCPlusPlus.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "BankingCPlusPlus.h"
#include "IAccountSummaryReader.h"


// This is an example of an exported variable
BANKINGCPLUSPLUS_API int nBankingCPlusPlus=0;

// This is an example of an exported function.
BANKINGCPLUSPLUS_API int fnBankingCPlusPlus(void)
{
	return 42;
}


void ReadAccountSummary(IAccountSummaryReader* reader)
{
	reader->CurrentBalance(30);
}