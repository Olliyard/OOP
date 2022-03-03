// Projekt		2. semester exercises
//
// Fil			Name.cpp
//
// Beskrivelse	Implementation of class Name
//
// Forfatter	NVJ
//
// Version		1.0 - 220812 - originally version
//				1.1 - 160116 - new method names

#include "Name.h"


Name::Name(string firstName, string lastName)
{
	set(firstName, lastName);
}


void Name::set(string fN, string lN)
{
	firstName_ = fN;
	lastName_ = lN;
}


void Name::print() const
{
	cout << firstName_ << " " << lastName_ << endl;
}