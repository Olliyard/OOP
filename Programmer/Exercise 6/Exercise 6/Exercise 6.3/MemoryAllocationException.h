#pragma once
#include <iostream>
using namespace std;

class MemoryAllocationException
{
public:
	MemoryAllocationException(bool tP)
	{
		terminateProgram_ = tP;
	}
	void reportError(void)
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

private:
	bool terminateProgram_;
};