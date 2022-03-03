#include "Fly.h"

int main()
{
	Fly boeing("Boeing 737", 1200, 10);
	boeing.print();
	int hours = boeing.beregnRejsetid(3000)/60;
	cout << "Rejsetid: " << hours <<"h, " << boeing.beregnRejsetid(3000) << "m" << endl;

	return 0;
}