#include <iostream>
#include "DataStorage.h"

using namespace std;


int main()
{
	DataStorage testObject(5, 0);

	cout << "Elements: ";
	testObject.print();
	cout << "\nNumber of elements: " << testObject.numberOfElements() << endl;
	cout << "Mean value: " << testObject.meanValue() << endl << endl;

	cout << "Elements: ";
	testObject.insert(7.6).insert(6.7).insert(15.3).insert(2.44).insert(10.2).insert(11.3).print();
	cout << "\nNumber of elements after insert: " << testObject.numberOfElements() << endl;
	cout << "Mean value: " << testObject.meanValue() << endl << endl;

	cout << "Number of elements between 0 og 12: " << testObject.numberOfElementsBetween(0, 12) << endl << endl;

	int slettet = testObject.eraseElementsBetween(0, 12);

	cout << "Elements: ";
	testObject.print();
	cout << "\nNumber of erased elements: " << slettet << endl;
	cout << "Number of elements after erase: " << testObject.numberOfElements() << endl;
	cout << "Mean value: " << testObject.meanValue() << endl << endl;

	return 0;
}