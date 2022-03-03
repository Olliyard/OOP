#include "Sommerhus.h"

int main()
{
	Sommerhus shus1("Lyngvig-hytte", 64, 1.3, 1 / 4 / 2020, 3000000, 3);	//fejl i oprettelse
	shus1.print();

	shus1.setNavn("Lynge-hus");
	shus1.setAreal(69);
	shus1.setAntalSengepladser(4);

	return 0;
}