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
	return afgift*12;
}

void Sommerhus::print() const
{
	cout << navn_ << endl;
	cout << areal_ << endl;
	cout << "Naermeste strand: " << afstandTilStrand_ << " km" << endl;
	Feriebolig::print();
	cout << "Ejendomsskat " << beregnAfgift() << " kr. pr. aar" << endl;
}
