// BankingCPlusPlus.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "BankingCPlusPlus.h"


// This is an example of an exported variable
BANKINGCPLUSPLUS_API int nBankingCPlusPlus=0;

// This is an example of an exported function.
BANKINGCPLUSPLUS_API int fnBankingCPlusPlus(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see BankingCPlusPlus.h for the class definition
CBankingCPlusPlus::CBankingCPlusPlus()
{
	return;
}
