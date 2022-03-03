// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				interface til klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#pragma once
#include <iostream>

using namespace std;


class IntArray
{
public:
	IntArray(int = 10);
	~IntArray();
	void setArraySize(int);
	int getArraySize() const;
	void insertNumber(int, int);
	void print() const;
private:
	int arraySize_ = 0;
	int* arrayPtr_;
};