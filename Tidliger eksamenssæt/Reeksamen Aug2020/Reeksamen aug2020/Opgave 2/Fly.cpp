#include "Fly.h"

Fly::Fly(const string& maerkeOgModel, int topfart, int maxFlyveHoejde)
{
	maerkeOgModel_ = maerkeOgModel;
	setTopfart(topfart);
	maxFlyveHoejde_ = (maxFlyveHoejde >= 1 ? maxFlyveHoejde : 1);
	antalFlyvninger_ = 0;
}

int Fly::beregnRejsetid(int distance)
{
	return (60*((distance + (2*maxFlyveHoejde_*(2-sqrt(3))))/getTopfart()));
}

void Fly::print() const
{
	cout << maerkeOgModel_ << endl;
	cout << "Topfart " << getTopfart() << endl;
	cout << "Flyvehoejde " << maxFlyveHoejde_ << " km" << endl;
	cout << antalFlyvninger_ << " flyvninger" << endl;
}
