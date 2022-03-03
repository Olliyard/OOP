#include "Firma.h"

Firma::Firma(const char* navn, int antalAnsatte, long int aarligOmsaetning)
{
	navn_ = new char[strlen(navn) + 1];
	if (navn_ == nullptr)
	{
		exit(1);
	}

	strcpy(navn_, navn);
	setAntalAnsatte(antalAnsatte);
	setAarligOmsaetning(aarligOmsaetning);
}

Firma::Firma(const Firma& copy)
{
	cout << "*** Firma copy constructor is called ***" << endl;
	navn_ = new char[strlen(copy.navn_) + 1];

	if (navn_ == nullptr)
	{
		exit(1);
	}

	strcpy(navn_, copy.navn_);
	setAntalAnsatte(copy.antalAnsatte_);
	setAarligOmsaetning(copy.aarligOmsaetning_);
}

Firma::~Firma()
{
	cout << "*** Firma destructor is called ***" << endl;
	delete[] navn_;
}

void Firma::setNavn(const char* navn)
{
	navn_ = new char[strlen(navn) + 1];
	if (navn_ == nullptr)
	{
		exit(1);
	}

	strcpy(navn_, navn);
}

void Firma::setAntalAnsatte(int antalAnsatte)
{
	antalAnsatte_ = (antalAnsatte > 0 ? antalAnsatte : 0);
}

void Firma::setAarligOmsaetning(long int aarligOmsaetning)
{
	aarligOmsaetning_ = (aarligOmsaetning >= 1000000 ? aarligOmsaetning : 1000000);
}

void Firma::print() const
{
	cout << "*** " << navn_ << " ***" << endl;
	cout << antalAnsatte_ << " ansatte" << endl;
	cout << "Aarlig omsaetning " << aarligOmsaetning_ << " mill." << endl;
}
