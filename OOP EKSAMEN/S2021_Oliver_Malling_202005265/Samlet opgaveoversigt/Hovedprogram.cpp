/*----------------------------------------------------------------------*/
/*Navn: Oliver Malling		Studie nr.: 202005265		Dato: 14-06-2021*/
/*----------------------------------------------------------------------*/

/*	-	-	-	-	-	-	-	Opgave 1	-	-	-	-	-	-	-	*/

/*1a) - header fil for flyttebil*/
#pragma once
#include "Flyttekasse.h"
#include <list>
#include <iostream>
using namespace std;

class Flyttebil
{
public:
	Flyttebil(int kapacitet = 10);
	int beregnAntalFlyttekasser(const Flyttekasse& flyttekasse);
	void fyldTomFlyttebil(const Flyttekasse& flyttekasse, int antal);
	void toemFlyttebil();
	void operator+=(const Flyttekasse& flyttekasseRef);

private:
	int kapacitet_;
	list<const Flyttekasse*> indhold_;
};


/*1b) - source kode for flyttebil*/
#include "Flyttebil.h"

Flyttebil::Flyttebil(int kapacitet)
{
	kapacitet_ = (10 <= kapacitet && kapacitet <= 40 ? kapacitet : 10);
}

int Flyttebil::beregnAntalFlyttekasser(const Flyttekasse& flyttekasse)
{
	int space = 0;
	if (indhold_.empty() != 0)
	{
		space = flyttekasse.beregnVolumen() * 1000;
	}
	return space;
}

void Flyttebil::fyldTomFlyttebil(const Flyttekasse& flyttekasse, int antal)
{
	if (indhold_.empty() != 0 && antal <= beregnAntalFlyttekasser(flyttekasse))
	{
		indhold_.assign(antal, &flyttekasse);
	}
	else
	{
		cout << "Flyttebilen er ikke tom eller der er ikke plads til " << antal << " flyttekasser. Der fyldes ingen flyttekasser i flyttebilen." << endl;
		cout << endl;
	}
	cout << "Der er nu " << indhold_.size() << " flyttekasser i flyttebilen." << endl;
	cout << endl;
}

void Flyttebil::toemFlyttebil()
{
	indhold_.clear();
	cout << "Flyttebilen er tom" << endl;
	cout << endl;
}


/*1c) - Test program for flyttebil*/
#include "Flyttebil.h"

int main()
{
	Flyttekasse kasse1(10, 10, 10);
	Flyttebil bil1(20);
	cout << "Der er plads til " << bil1.beregnAntalFlyttekasser(kasse1) << " flyttekasser i flyttebilen" << endl;
	bil1.fyldTomFlyttebil(kasse1, 500);		//for lavt antal
	bil1.toemFlyttebil();
	bil1.fyldTomFlyttebil(kasse1, 2000);	//for højt antal

	bil1 += kasse1;							//+= operator

	return 0;
}


/*1d) - prototype for += operator*/
void operator+=(const Flyttekasse& flyttekasseRef);


/*1e) - implementering af += operator*/
void Flyttebil::operator+=(const Flyttekasse& flyttekasseRef)
{
	if (indhold_.size() != beregnAntalFlyttekasser(flyttekasseRef))
	{
		indhold_.push_back(&flyttekasseRef);
	}
	else
	{
		cout << "Der er ikke plads til flere flyttekasser i flyttebilen." << endl;
	}
	cout << "Der er nu " << indhold_.size() << " flyttekasser i flyttebilen." << endl;
	cout << endl;
}


/*1f) - test af += operator*/
#include "Flyttebil.h"

int main()
{
	Flyttekasse kasse1(10, 10, 10);
	Flyttebil bil1(20);
	cout << "Der er plads til " << bil1.beregnAntalFlyttekasser(kasse1) << " flyttekasser i flyttebilen" << endl;
	bil1.fyldTomFlyttebil(kasse1, 500);		//for lavt antal
	bil1.toemFlyttebil();
	bil1.fyldTomFlyttebil(kasse1, 2000);	//for højt antal

	bil1 += kasse1;							//+= operator

	return 0;
}


/*	-	-	-	-	-	-	-	Opgave 2	-	-	-	-	-	-	-	*/

/*2a) - skriv kode for header-fil Feriebolig*/
#pragma once
#include "Dato.h"

class Feriebolig
{
public:
	Feriebolig(const Dato& købsdato, int købspris, int antalSengepladser);
	virtual ~Feriebolig();
	Dato getKøbsdato() const;
	void setKøbsdato(const Dato& købsdato);
	int getKøbspris() const;
	void setKøbspris(int købspris);
	int getAntalSengepladser() const;
	void setAntalSengepladser(int antalSengepladser);
	virtual int beregnAfgift() = 0;
	virtual void print() const;

protected:
	Dato købsdato_;

private:
	int købspris_;
	int antalSengepladser_;
};


/*2b) - headerfil Sommerhus*/
#pragma once
#include "Feriebolig.h"
#include <iostream>
using namespace std;

class Sommerhus : public Feriebolig
{
public:
	Sommerhus(const char* navn, int areal, float afstandTilStrand, const Dato& købsdato, int købspris, int antalSengepladser);
	void setAreal(int areal);
	void setNavn(const char* navn);
	int beregnAfgift() const;
	void print() const;

private:
	int areal_;
	float afstandTilStrand_;
	char* navn_;
};


/*2c) - source fil for Sommerhus*/
#include "Sommerhus.h"

Sommerhus::Sommerhus(const char* navn, int areal, float afstandTilStrand, const Dato& købsdato, int købspris, int antalSengepladser) : Feriebolig(købsdato, købspris, antalSengepladser)
{
	setNavn(navn);
	setAreal(areal);
	afstandTilStrand_ = (afstandTilStrand >= 0 ? afstandTilStrand : 0);
}

void Sommerhus::setAreal(int areal)
{
	areal_ = (areal >= 25 ? areal : 25);
}

void Sommerhus::setNavn(const char* navn)
{
	navn_ = new char[strlen(navn) + 1];

	if (navn_ == nullptr)
	{
		exit(1);
	}
	strcpy(navn_, navn);
}

int Sommerhus::beregnAfgift() const
{
	int afgift = 0;
	afgift = getKøbspris() / areal_;
	return afgift * 12;
}

void Sommerhus::print() const
{
	cout << navn_ << endl;
	cout << areal_ << endl;
	cout << "Naermeste strand: " << afstandTilStrand_ << " km" << endl;
	Feriebolig::print();
	cout << "Ejendomsskat " << beregnAfgift() << " kr. pr. aar" << endl;
}


/*2d) - test program for Sommerhus*/
#include "Sommerhus.h"

Sommerhus::Sommerhus(const char* navn, int areal, float afstandTilStrand, const Dato& købsdato, int købspris, int antalSengepladser) : Feriebolig(købsdato, købspris, antalSengepladser)
{
	setNavn(navn);
	setAreal(areal);
	afstandTilStrand_ = (afstandTilStrand >= 0 ? afstandTilStrand : 0);
}

void Sommerhus::setAreal(int areal)
{
	areal_ = (areal >= 25 ? areal : 25);
}

void Sommerhus::setNavn(const char* navn)
{
	navn_ = new char[strlen(navn) + 1];

	if (navn_ == nullptr)
	{
		exit(1);
	}
	strcpy(navn_, navn);
}

int Sommerhus::beregnAfgift() const
{
	int afgift = 0;
	afgift = getKøbspris() / areal_;
	return afgift * 12;
}

void Sommerhus::print() const
{
	cout << navn_ << endl;
	cout << areal_ << endl;
	cout << "Naermeste strand: " << afstandTilStrand_ << " km" << endl;
	Feriebolig::print();
	cout << "Ejendomsskat " << beregnAfgift() << " kr. pr. aar" << endl;
}
