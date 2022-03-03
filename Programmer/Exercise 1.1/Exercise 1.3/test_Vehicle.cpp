#include "Vehicle.h"

int main()
{
	cout << "==============================" << endl;
	cout << "Test case: Constructor - Valid input " << endl;
	cout << "------------------------------" << endl;
	Vehicle vehicle1("Peugeot", 'D', 2000);
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor - invalid fuel" << endl;
	cout << "------------------------------" << endl;
	Vehicle vehicle2("Peugeot", 'Q', 2000);
	vehicle2.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor - invalid weight " << endl;
	cout << "------------------------------" << endl;
	Vehicle vehicle3("Peugeot", 'D', -2000);
	vehicle3.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set valid regNr " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setRegNr("AB12345");
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid regNr " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setRegNr("ABC1234");
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set owner " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setOwner("Oliver", "Malling");
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set valid regDate " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setRegDate(4, 2, 2021);
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid regDate day " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setRegDate(-2, 2, 2021);
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid regDate month " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setRegDate(4, -2, 2021);
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Set invalid regDate year " << endl;
	cout << "------------------------------" << endl;
	vehicle1.setRegDate(4, 2, 1820);
	vehicle1.printCertificate();
	cout << "==============================" << endl << endl;
}