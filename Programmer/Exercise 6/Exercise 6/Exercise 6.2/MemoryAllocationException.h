#pragma once
#include <iostream>
using namespace std;

class MemoryAllocationException
{
public:
	MemoryAllocationException(bool tP);
	void reportError(void);

private:
	bool terminateProgram_;
};

