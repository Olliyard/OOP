#include "ClassA.h"

ClassA::ClassA(int a)
{
	x = a;
}

void ClassA::print() const
{
	cout << x << endl;
}