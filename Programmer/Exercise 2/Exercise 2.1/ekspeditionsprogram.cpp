#include <iostream>
#include <conio.h>
#include "KasseKnap.h"


using namespace std;


int main()
{
	cout << "Tast 'n' for at trække et nummer." << endl;
	cout << "Tast '1' for ny kunde ved kasse 1." << endl;
	cout << "Tast '2' for ny kunde ved kasse 2." << endl;
	cout << "Tast '3' for ny kunde ved kasse 3." << endl;
	cout << "Tast 'q' for lukke programmet.\n\n\n\n\n";
	cout << "   Kasse1    Kasse2    Kasse3" << endl;

	// erklæring af objekter og variable
	char tast;
	Display display1(1);
	Display display2(2);
	Display display3(3);

	NummerStander nummerstander;

	KasseKnap kasse1(&display1, &nummerstander);
	KasseKnap kasse2(&display2, &nummerstander);
	KasseKnap kasse3(&display3, &nummerstander);


	do
	{
		tast = _getch();

		switch (tast)
		{
		case 'n':
			nummerstander.traekNummer();
			break;

		case '1':
			kasse1.tryk();
			break;

		case '2':
			kasse2.tryk();
			break;

		case '3':
			kasse3.tryk();
			break;

		case 'q':
			break;
		}

	} while (tast != 'q' && tast != 'Q');

	return 0;
}