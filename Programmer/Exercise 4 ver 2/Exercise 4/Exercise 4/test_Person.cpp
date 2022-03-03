// Projekt		øvelser 2. semester
//
// Fil			test_Person.cpp
//
// Beskrivelse	Test af klassen Person
//
// Forfatter	NVJ
//
// Version		1.0 - 310811 - oprindelig version

#include "Person.h"


int main()
{
	Person friend1("111111-1111");
	Person friend2("222222-2222", "Peter");
	const Person friend3("333333-3333", "Kurt", "Skov");
	Person friend4("444444-4444", "Peter", "Kastrup", "Hansen");

	friend1.printAll();
	friend1.printPartially();
	friend2.printAll();
	friend2.printPartially();
	friend3.printAll();
	friend3.printPartially();
	friend4.printAll();
	friend4.printPartially();

	cout << "\nI dette program er der lige nu " << Person::getNumberOfPersons() << " personer\n\n";

	{
		Person friend0;

		friend0.printAll();
		friend0.printPartially();

		cout << "\nI dette program er der lige nu " << Person::getNumberOfPersons() << " personer\n\n";

		friend0.setFirstName("Lone");
		friend0.setMiddleName("Alstrup");
		friend0.setLastName("Larsen");

		friend0.printAll();
		friend0.printPartially();
	}

	cout << "\nI dette program er der lige nu " << Person::getNumberOfPersons() << " personer\n\n";

	cout << friend3.checkForSameName(friend4) << endl << endl;
	cout << friend3.checkForSameName(friend3) << endl << endl;

	string s, f, m, l;

	friend3.getData(s, f, m, l);

	cout << s << ' ' << f + " " + m + " " + l << endl << endl;

	friend4 = friend3;			// memberwise assignment

	friend4.printAll();
	friend4.printPartially();

	return 0;
}