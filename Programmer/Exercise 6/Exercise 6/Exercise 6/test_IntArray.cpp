// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				test-program til klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"


int main()
{
	IntArray testObj(5);		//size sættes til 5

	testObj.print();			//print 0'er

	testObj.insertNumber(34, 2);	//indsætter 34 på index 2
	testObj.insertNumber(11, 4);	//indsætter 11 på index 4
	testObj.insertNumber(120, 7);	//indsætter IKKE 120 på index 7 da dette ikke eksisterer (size = 5)
	testObj.print();				//printer "0, 0, 34, 0, 11"

	testObj.setArraySize(15);		//size sættes til 15
	testObj.print();				//printer "0, 0, 34, 0, 11" og derefter 10 0'er

	testObj.setArraySize(-5);		//ikke muligt, størrelse forbliver 15, det er kun ved oprettelse at size pr. default er 10.
	testObj.print();				//printer "0, 0, 34, 0, 11" og derefter 5 0'er

	testObj.setArraySize(15);		//size sættest til 15
	testObj.print();				//printer "0, 0, 34, 0, 11" og derefter 10 0'er

	testObj.setArraySize(4);		//size sættest til 4
	testObj.print();				//printer "0, 0, 34, 0"

	cout << endl;

	return 0;
}