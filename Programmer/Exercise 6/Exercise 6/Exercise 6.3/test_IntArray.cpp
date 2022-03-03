// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel p� dynamisk lagerallokering
//				test-program til klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

#include "IntArray.h"
#include "MemoryAllocationException.h"


int main()
{
	try
	{
		IntArray testObj(5);		//size s�ttes til 5

		testObj.print();			//print 0'er

		testObj.insertNumber(34, 2);	//inds�tter 34 p� index 2
		testObj.insertNumber(11, 4);	//inds�tter 11 p� index 4
		testObj.insertNumber(120, 7);	//inds�tter IKKE 120 p� index 7 da dette ikke eksisterer (size = 5)
		testObj.print();				//printer "0, 0, 34, 0, 11"

		try
		{
			testObj.setArraySize(15);		//size s�ttes til 15
			
		}
		catch (MemoryAllocationException& e)
		{
			e.reportError();
		}

		testObj.print();				//printer "0, 0, 34, 0, 11" og derefter 10 0'er

		try
		{
			testObj.setArraySize(-5);		//ikke muligt, st�rrelse forbliver 15, det er kun ved oprettelse at size pr. default er 10.
			
		}
		catch (MemoryAllocationException& e)
		{
			e.reportError();
		}

		testObj.print();				//printer "0, 0, 34, 0, 11" og derefter 5 0'er

		try
		{

			testObj.setArraySize(15);		//size s�ttest til 15
			
		}
		catch (MemoryAllocationException& e)
		{
			e.reportError();
		}

		testObj.print();				//printer "0, 0, 34, 0, 11" og derefter 10 0'er

		try
		{
			testObj.setArraySize(4);		//size s�ttest til 4
			
		}
		catch (MemoryAllocationException& e)
		{
			e.reportError();
		}

		testObj.print();				//printer "0, 0, 34, 0"

		cout << endl;

		return 0;
	}
	catch (MemoryAllocationException& e)
	{
		e.reportError();
	}
}