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

