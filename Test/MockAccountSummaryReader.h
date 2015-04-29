#include "IAccountSummaryReader.h"

#include <gmock/gmock.h>

class MockAccountSummaryReader : public IAccountSummaryReader
{
public:
	MOCK_METHOD1(CurrentBalance, void(int accountBalanceInPence));
	MOCK_METHOD1(LastTransaction, void(const LedgerEntry* lastTransaction));
};

