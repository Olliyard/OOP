#include <iostream>

using namespace std;

#include "Dato.h"


Dato::Dato(int dag, int m�ned, int �r)
{
	if (�r < 1900 || �r > 2100)
	{
		�r = 1900;
	}

	�r_ = �r;

	if (m�ned < 1 || m�ned > 12)
	{
		m�ned = 1;
	}

	m�ned_ = m�ned;

	dag_ = tjekDag(dag);
}

int Dato::getDag() const
{
	return dag_;
}

int Dato::getM�ned() const
{
	return m�ned_;
}

int Dato::get�r() const
{
	return �r_;
}

void Dato::print() const
{
	cout << dag_ << '/' << m�ned_ << '/' << �r_;
}

int Dato::tjekDag(int testDag) const
{
	static const int dagePrM�ned[13] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// Determine whether testDag is valid for specified month
	if (testDag > 0 && testDag <= dagePrM�ned[m�ned_])
		return testDag;

	// February 29 check for leap year 
	if (m�ned_ == 2 && testDag == 29 && (�r_ % 400 == 0 || (�r_ % 4 == 0 && �r_ % 100 != 0)))
		return testDag;

	// testDag is not valid
	return 1;
}

ostream& operator<<(ostream& coutRef, const Dato& datoRef)
{
	datoRef.print();

	return coutRef;
}