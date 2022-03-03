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
