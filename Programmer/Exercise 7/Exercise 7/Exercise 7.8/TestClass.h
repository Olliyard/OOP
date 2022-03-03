#pragma once
#include <iostream>
using namespace std;

class TestClass
{
public:
	TestClass(const char* localPtr = "NN")
	{
		setName(localPtr);
	}

	~TestClass()
	{
		delete[] namePtr_;
	}

	void setName(const char* setPtr)
	{
		delete[] namePtr_;
		namePtr_ = new char[strlen(setPtr) + 1];

		if (namePtr_ == NULL)
			exit(1);

		strcpy_s(namePtr_, 50, setPtr);
	}

	void print()
	{
		cout << "\nName: " << namePtr_ << endl;
	}

private:
	char* namePtr_;
};