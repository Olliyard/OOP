#include "MemoryAllocationException.h"

int main()
{
	MemoryAllocationException mem(true);
	mem.reportError();

	return 0;
}