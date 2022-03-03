// Projekt		2. semester exercises
//
// Fil			Date.h
//
// Beskrivelse	Definition of class Date
//
// Forfatter	NVJ
//
// Version		1.0 - 220812 - original version
//				1.1 - 160116 - new method names

#pragma once

#include <iostream>

using namespace std;


class Date
{
public:
	Date(int day = 1, int month = 1, int year = 1900);
	bool set(int d, int m, int y);
	void print() const;
private:
	bool validate() const;
	int day_;
	int month_;
	int year_;
};
