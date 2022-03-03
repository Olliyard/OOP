#include "ClassB.h"
#include "ClassC.h"

int main()
{
	ClassC myCObject(7);
	ClassB myBObject(&myCObject, 11);

	myBObject.print();

	return 0;
}