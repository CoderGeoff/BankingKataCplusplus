#include "stdafx.h"
#include "LedgerEntry.h"

#include "ILedgerEntryReader.h"

void LedgerEntry::Read(ILedgerEntryReader* reader) const
{
	reader->Date("30 March 2015");
	reader->Description("Cash withdrawal");
	reader->Amount("30.00");
}