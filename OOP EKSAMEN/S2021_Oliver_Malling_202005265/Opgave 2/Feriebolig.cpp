#include "Feriebolig.h"
#include <math.h>
#include <iostream>

using namespace std;


Feriebolig::Feriebolig(const Dato& k�bsdato, int k�bspris, int antalSengepladser)
{
    k�bsdato_ = k�bsdato;
    setK�bspris(k�bspris);
    setAntalSengepladser(antalSengepladser);
}

Feriebolig::~Feriebolig()
{
}

Dato Feriebolig::getK�bsdato() const
{
    return k�bsdato_;
}

void Feriebolig::setK�bsdato(const Dato& k�bsdato)
{
    k�bsdato_ = k�bsdato;
}

int Feriebolig::getK�bspris() const
{
    return k�bspris_;
}

void Feriebolig::setK�bspris(int k�bspris)
{
    k�bspris_ = (k�bspris > 100000 ? k�bspris : 100000);
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
    cout << "Sidst handlet " << k�bsdato_ << endl;
    cout << "Pris " << k�bspris_ << " kr" << endl;
}