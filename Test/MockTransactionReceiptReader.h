#include "ITransactionReceiptReader.h"
#include "gmock/gmock.h"

class MockTransactionReceiptReader : public ITransactionReceiptReader {
public:
	MOCK_CONST_METHOD1(Successful, void(bool successful));
	MOCK_CONST_METHOD1(Amount, void(const std::string& amount));
};
