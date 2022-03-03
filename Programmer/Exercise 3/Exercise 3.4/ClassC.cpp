#include "ClassC.h"

ClassC::ClassC(int y)
{
	y_ = y;
}

void ClassC::print() const
{
	cout << y_ << endl;
}