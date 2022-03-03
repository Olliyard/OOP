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

