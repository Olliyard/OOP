#include "ClassB.h"

ClassB::ClassB(ClassC* CPtr, int x)
{
	CPtr_ = CPtr;

	x_ = x;
}

void ClassB::print() const
{
	CPtr_->print();
	cout << x_ << endl;
}