#pragma once
#include <string>
#include <iostream>
using namespace std;

class Firma
{
public:
	Firma(const char* navn, int antalAnsatte, long int aarligOmsaetning);
	Firma(const Firma& copy);	//copy-constructor for rule-of-three
	~Firma();					//destructor for rule-of-three
	void setNavn(const char* navn);
	void setAntalAnsatte(int antalAnsatte);
	void setAarligOmsaetning(long int aarligOmsaetning);
	void print() const;

private:
	char* navn_;
	int antalAnsatte_;
	long int aarligOmsaetning_;
};

