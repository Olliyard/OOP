#include "Name.h"


int main()
{
	cout << "==============================" << endl;
	cout << "Test case: Constructor - default " << endl;
	cout << "------------------------------" << endl;
	Name name1;
	name1.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor - valid name" << endl;
	cout << "------------------------------" << endl;
	Name name2("Oliver", "Malling");
	name2.print();
	cout << "==============================" << endl << endl;

	return 0;
}