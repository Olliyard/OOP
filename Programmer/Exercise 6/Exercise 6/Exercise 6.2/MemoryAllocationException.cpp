#include "MemoryAllocationException.h"

MemoryAllocationException::MemoryAllocationException(bool tP)
{
	terminateProgram_ = tP;
}

void MemoryAllocationException::reportError(void)
{
	if (terminateProgram_ == true)
	{
		cout << "Allocation of memory failed - program will terminate" << endl;
		exit(1);
	}
	else
	{
		cout << "Allocation of memory failed - no changes were made" << endl;
	}
}
