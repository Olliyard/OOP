#include <iostream>

using namespace std;

#include "TestClass.h"


TestClass::TestClass(const char* localPtr)
{
	setName(localPtr);
}


TestClass::~TestClass()
{
	delete[] namePtr_;
}


void TestClass::setName(const char* setPtr)
{
	delete[] namePtr_;

	namePtr_ = new char[strlen(setPtr) + 1];

	if (namePtr_ == NULL)
		exit(1);

	strcpy(namePtr_, setPtr);
}


void TestClass::print()
{
	cout << "\nName: " << namePtr_ << endl;
}