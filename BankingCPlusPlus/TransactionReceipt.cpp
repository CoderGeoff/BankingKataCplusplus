#include "stdafx.h"
#include "TransactionReceipt.h"

#include "ITransactionReceiptReader.h"

void TransactionReceipt::Read(ITransactionReceiptReader& reader) const
{
	reader.Amount("1000");
	reader.Successful(true);
}

