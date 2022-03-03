#include "Feriebolig.h"
#include <math.h>
#include <iostream>

using namespace std;


Feriebolig::Feriebolig(const Dato& købsdato, int købspris, int antalSengepladser)
{
    købsdato_ = købsdato;
    setKøbspris(købspris);
    setAntalSengepladser(antalSengepladser);
}

Feriebolig::~Feriebolig()
{
}

Dato Feriebolig::getKøbsdato() const
{
    return købsdato_;
}

void Feriebolig::setKøbsdato(const Dato& købsdato)
{
    købsdato_ = købsdato;
}

int Feriebolig::getKøbspris() const
{
    return købspris_;
}

void Feriebolig::setKøbspris(int købspris)
{
    købspris_ = (købspris > 100000 ? købspris : 100000);
}

int Feriebolig::getAntalSengepladser() const
{
    return antalSengepladser_;
}

void Feriebolig::setAntalSengepladser(int antalSengepladser)
{
    antalSengepladser_ = (antalSengepladser > 0 ? antalSengepladser : 4);
}

void Feriebolig::print() const
{
    cout << antalSengepladser_ << " sovepladser" << endl;
    cout << "Sidst handlet " << købsdato_ << endl;
    cout << "Pris " << købspris_ << " kr" << endl;
}