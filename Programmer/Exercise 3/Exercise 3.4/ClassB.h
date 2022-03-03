#pragma once
#include <iostream>
#include "ClassC.h"

using namespace std;

class ClassB
{
public:
	ClassB(ClassC*, int);
	void print() const;
private:
	ClassC* CPtr_;
	int x_;
};