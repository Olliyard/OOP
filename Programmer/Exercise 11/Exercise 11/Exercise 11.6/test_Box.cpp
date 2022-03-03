#include "Box.h"

int main()
{
	Box box1("Batteriboksen", "batterier");

	for (size_t i = 0; i < 10; i++)
	{
		box1++;
	}

	cout << box1;

	box1--;
	cout << box1;
	cout << --box1;	//bedst ved cout, ellers sker ændring ikke (box printes først og derefter dekrementeres).

	box1++;
	cout << box1;
	cout << ++box1;	//bedst ved cout, ellers sker ændring ikke (box printes først og derefter inkrementeres).
	
	return 0;
}