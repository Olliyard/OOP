#include "Date.h"


int main()
{
	cout << "==============================" << endl;
	cout << "Test case: Constructor - default " << endl;
	cout << "------------------------------" << endl;
	Date date1;
	date1.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor - valid date" << endl;
	cout << "------------------------------" << endl;
	Date date2(29, 2, 2016);
	date2.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor - invalid date" << endl;
	cout << "------------------------------" << endl;
	Date date3(29, 2, 2015);
	date3.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid day" << endl;
	cout << "------------------------------" << endl;
	cout << date2.set(40, 2, 2016) << endl;
	date2.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid month" << endl;
	cout << "------------------------------" << endl;
	cout << date2.set(12, 14, 2016) << endl;
	date2.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid year" << endl;
	cout << "------------------------------" << endl;
	cout << date2.set(12, 2, 1000) << endl;
	date2.print();
	cout << "==============================" << endl << endl;


	return 0;
}