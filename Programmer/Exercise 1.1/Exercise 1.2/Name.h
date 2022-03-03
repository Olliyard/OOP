// Projekt		2. semester exercises
//
// Fil			Name.h
//
// Beskrivelse	Definition of class Name
//
// Forfatter	NVJ
//
// Version		1.0 - 220812 - originally version
//				1.1 - 160116 - new method names

#pragma once

#include <iostream>
#include <string>

using namespace std;


class Name
{
public:
	Name(string firstName = "N", string lastName = "N");
	void set(string fN, string lN);
	void print(void) const;
private:
	string firstName_;
	string lastName_;
};
