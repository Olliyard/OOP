#include "Transportmiddel.h"


Transportmiddel::Transportmiddel(const string& maerkeOgModel, int topfart)
{
	maerkeOgModel_ = maerkeOgModel;
	setTopfart(topfart);
}

void Transportmiddel::setTopfart(int topfart)
{
	topfart_ = (topfart >= 100 ? topfart : 100);
}

int Transportmiddel::getTopfart() const
{
	return topfart_;
}

int Transportmiddel::beregnRejsetid(int distance)
{
	return 0;
}

void Transportmiddel::print() const
{
	cout << maerkeOgModel_ << endl;
	cout << "Topfart " << topfart_ << " km/t" << endl;
}
