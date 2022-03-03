#pragma once
#include "Dato.h"

class Feriebolig
{
public:
	Feriebolig(const Dato& k�bsdato, int k�bspris, int antalSengepladser);
	virtual ~Feriebolig();
	Dato getK�bsdato() const;
	void setK�bsdato(const Dato& k�bsdato);
	int getK�bspris() const;
	void setK�bspris(int k�bspris);
	int getAntalSengepladser() const;
	void setAntalSengepladser(int antalSengepladser);
	virtual int beregnAfgift() = 0;
	virtual void print() const;

protected:
	Dato k�bsdato_;

private:
	int k�bspris_;
	int antalSengepladser_;
};

