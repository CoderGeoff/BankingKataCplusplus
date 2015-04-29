// BankingCPlusPlus.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "BankingCPlusPlus.h"
#include "IAccountSummaryReader.h"
#include "Account.h"
#include "AccountHandle.h"
#include "LedgerEntry.h"
#include "TransactionReceipt.h"

// This is an example of an exported variable
BANKINGCPLUSPLUS_API int nBankingCPlusPlus=0;

// This is an example of an exported function.
BANKINGCPLUSPLUS_API int fnBankingCPlusPlus(void)
{
	return 42;
}

BANKINGCPLUSPLUS_API AccountHandle OpenAccount()
{
	Account* account = Account::OpenNew();
	return AccountHandle(*account);
}

BANKINGCPLUSPLUS_API void ReadAccountSummary(AccountHandle accountHandle, IAccountSummaryReader& reader)
{
	auto account = accountHandle.Get();
	account.ReadCurrentBalance(reader);
	reader.LastTransaction(new LedgerEntry());
}

BANKINGCPLUSPLUS_API TransactionReceipt DepositCash(int amountInPence)
{
	TransactionReceipt receipt;
	return receipt;
}