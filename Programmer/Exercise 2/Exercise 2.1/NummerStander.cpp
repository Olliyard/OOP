#include "NummerStander.h"

NummerStander::NummerStander()
{
	senestEkspederedeNummer_ = 0;
	senestTrukneNummer_ = 0;
}

void NummerStander::traekNummer()
{
	senestTrukneNummer_++;

	if (senestTrukneNummer_ == 100)
	{
		senestTrukneNummer_ = 0;
	}
}

int NummerStander::getNaesteNummerIKoe()
{
	if (senestEkspederedeNummer_ == senestTrukneNummer_)
	{
		return -1;
	}

	else
	{
		senestEkspederedeNummer_++;
		if (senestEkspederedeNummer_ == 100)
		{
			senestEkspederedeNummer_ = 0;
		}
		return (senestEkspederedeNummer_);
	}
}