// BankingCPlusPlus.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "BankingCPlusPlus.h"
#include "IAccountSummaryReader.h"
#include "AccountState.h"
#include "AccountHandle.h"
#include "LedgerEntry.h"
#include "TransactionReceipt.h"
#include "TransactionOutcome.h"
#include "DepositTransaction.h"
#include "DepositCashLedgerWriter.h"
#include "DepositCashBusinessRules.h"

// This is an example of an exported variable
BANKINGCPLUSPLUS_API int nBankingCPlusPlus=0;

// This is an example of an exported function.
BANKINGCPLUSPLUS_API int fnBankingCPlusPlus(void)
{
	return 42;
}

BANKINGCPLUSPLUS_API AccountHandle OpenAccount()
{
	AccountState* account = AccountState::OpenNew();
	return AccountHandle(*account);
}

BANKINGCPLUSPLUS_API void ReadAccountSummary(AccountHandle accountHandle, IAccountSummaryReader& reader)
{
	auto account = accountHandle.Get();
	account.ReadCurrentBalance(reader);
	reader.LastTransaction(new LedgerEntry());
}

BANKINGCPLUSPLUS_API TransactionReceipt DepositCash(AccountHandle accountHandle, int amountInPence)
{
	auto account = accountHandle.Get();
	auto transaction = new DepositTransaction(std::make_unique<DepositCashLedgerWriter>(), std::make_unique<DepositCashBusinessRules>());
	TransactionOutcome transactionOutcome = transaction->Execute(account, amountInPence);
	accountHandle.Set(*transactionOutcome.FinalAccountState().get());
	return TransactionReceipt();
}