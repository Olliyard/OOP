#pragma once
#include "Transportmiddel.h"

class Fly : public Transportmiddel
{
public:
	Fly(const string& maerkeOgModel, int topfart, int maxFlyveHoejde);
	int beregnRejsetid(int distance);
	void print() const;

private:
	int maxFlyveHoejde_;
	int antalFlyvninger_;
};

