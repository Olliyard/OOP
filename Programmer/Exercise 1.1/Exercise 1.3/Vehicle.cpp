// Projekt		2. semester exercises
//
// Fil			Vehicle.cpp
//
// Beskrivelse	Implementation of class Vehicle
//
// Forfatter	xx
//
// Version		1.0 - xxxxxx - originally version

#include "Vehicle.h"

Vehicle::Vehicle(string model, char fuel, int weight)
{
	model_ = model;
	fuel_ = (fuel == 'B' || fuel == 'D' ? fuel : 'X');
	weight_ = (weight > 0 ? weight : 0);
	regNr_ = "XX00000";
}

void Vehicle::printCertificate() const
{
	cout << "\nRegistreringsattest" << endl;
	cout << "-------------------" << endl;
	cout << "Model:      " << model_ << endl;
	cout << "Braendstof: " << fuel_ << endl;
	cout << "Vaegt:      " << weight_ << endl;
	cout << "Reg.dato:   ";

	regDate_.print();

	cout << "Reg.nr.:    " << regNr_ << endl;
	cout << "Ejer:       ";

	owner_.print();

	cout << "-------------------\n\n";
}

bool Vehicle::checkRegNr(void)	const
{
	int upper;
	int digit;
	if (regNr_.length() != 7)
	{
		return false;
	}

	for (size_t i = 0; i < 2; i++)
	{
		if (isupper(regNr_[i]) != true)
		{
			return false;
		}
	}

	for (size_t i = 2; i < regNr_.length(); i++)
	{
		if (isdigit(regNr_[i]) == false)
		{
			return false;
		}

	}

	return true;
}

void Vehicle::setOwner(string fN, string lN)
{
	owner_.set(fN, lN);
}

bool Vehicle::setRegDate(int d, int m, int y)
{
	return regDate_.set(d, m, y);
}

bool Vehicle::setRegNr(string regNr)
{
	regNr_ = regNr;
	checkRegNr();
	if (checkRegNr() == true)
	{
		return true;
	}

	else
	{
		regNr_ = "XX00000";
		return false;
	}
}