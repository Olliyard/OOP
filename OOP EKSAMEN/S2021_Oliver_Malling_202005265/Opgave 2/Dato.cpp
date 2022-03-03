#include <iostream>

using namespace std;

#include "Dato.h"


Dato::Dato(int dag, int måned, int år)
{
	if (år < 1900 || år > 2100)
	{
		år = 1900;
	}

	år_ = år;

	if (måned < 1 || måned > 12)
	{
		måned = 1;
	}

	måned_ = måned;

	dag_ = tjekDag(dag);
}

int Dato::getDag() const
{
	return dag_;
}

int Dato::getMåned() const
{
	return måned_;
}

int Dato::getÅr() const
{
	return år_;
}

void Dato::print() const
{
	cout << dag_ << '/' << måned_ << '/' << år_;
}

int Dato::tjekDag(int testDag) const
{
	static const int dagePrMåned[13] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// Determine whether testDag is valid for specified month
	if (testDag > 0 && testDag <= dagePrMåned[måned_])
		return testDag;

	// February 29 check for leap year 
	if (måned_ == 2 && testDag == 29 && (år_ % 400 == 0 || (år_ % 4 == 0 && år_ % 100 != 0)))
		return testDag;

	// testDag is not valid
	return 1;
}

ostream& operator<<(ostream& coutRef, const Dato& datoRef)
{
	datoRef.print();

	return coutRef;
}