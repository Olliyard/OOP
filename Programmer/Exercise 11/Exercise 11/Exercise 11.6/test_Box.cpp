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
	cout << --box1;	//bedst ved cout, ellers sker �ndring ikke (box printes f�rst og derefter dekrementeres).

	box1++;
	cout << box1;
	cout << ++box1;	//bedst ved cout, ellers sker �ndring ikke (box printes f�rst og derefter inkrementeres).
	
	return 0;
}