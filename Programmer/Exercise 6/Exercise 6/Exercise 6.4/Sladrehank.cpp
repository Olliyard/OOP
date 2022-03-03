#include <iostream>
#include <sstream>
#include "Sladrehank.h"

using namespace std;

// Initialisering af de statiske medlemmer af Sladrehank-klassen
unsigned int Sladrehank::instansTaeller = 0;
unsigned int Sladrehank::naesteId = 1;


// Default constructor
Sladrehank::Sladrehank()
{
	instansTaeller++;
	id_ = naesteId++;

	cout << "  Instans <" << id_ << "> oprettet af default constructor. "
		<< instansTaeller << " instanser." << endl;
}

// Explicit defineret constructor med navn på ny instans
Sladrehank::Sladrehank(const string& nameRef)
{
	instansTaeller++;
	id_ = naesteId++;
	name_ = nameRef;

	cout << "  Instans <" << id_ << "> med navn \"" << name_ << "\" oprettet af explicit def. constructor. "
		<< instansTaeller << " instanser." << endl;
}

// Destructor
Sladrehank::~Sladrehank()
{
	instansTaeller--;

	cout << "  Instans <" << id_ << "> nedlagt af destructor. "
		<< instansTaeller << " instanser." << endl;
}

// Copy constructor
Sladrehank::Sladrehank(const Sladrehank& copyMe)
{
	instansTaeller++;
	id_ = naesteId++;
	name_ = copyMe.name_;

	cout << "  Instans <" << id_ << "> oprettet af copy constructor som kopi af <" << copyMe.id_ << ">. "
		<< instansTaeller << " instanser." << endl;
}

// Assignment operator
Sladrehank& Sladrehank::operator=(const Sladrehank& rightObject)
{
	if (this != &rightObject)
	{
		cout << "  Instans <" << id_ << "> kopieret af assignment operator fra <" << rightObject.id_ << ">. "
			<< instansTaeller << " instanser." << endl;
	}
	else
	{
		cout << "  Instans <" << id_ << "> ikke kopieret af assignment operator fra sig selv. "
			<< instansTaeller << " instanser." << endl;
	}

	return *this;
}


unsigned int Sladrehank::getId() const
{
	return id_;
}


unsigned int Sladrehank::getNaesteId()
{
	return naesteId;
}


unsigned int Sladrehank::getInstansTaeller()
{
	return instansTaeller;
}