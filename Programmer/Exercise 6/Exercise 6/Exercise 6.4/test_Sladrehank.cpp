#include "Sladrehank.h"
#include <iostream>
using namespace std;

int main()
{
	//cout << "\nEksperiment 1 \"Lille constructor test\"\n\n";
	//Sladrehank s1 = Sladrehank();						
	//Sladrehank s2;
	//Sladrehank s3 = Sladrehank("Instans s3");
	//Sladrehank s4("Instans s4");
	//Sladrehank s5 = s1;
	//Sladrehank s6(s3);

	/*
	8) parameterløs constructor = default constructor
	9) default constructor
	10) Parametriseret constructor af typen "Instans s3".
	11) Parametriseret constructor af typen "Instans s4".
	12) Copy af default constructor s1.
	13) Copy af parametriseret constructor s3 (bemærk at s3 er parametriseret).
	*/


	//cout << "\nEksperiment 2 \"Insert 2 objects into array - 1 \"\n\n";
	//const int SIZE = 2;
	//Sladrehank s1("Instans s1");
	//Sladrehank s2("Instans s2");
	//Sladrehank sladrehankArray[SIZE];	

	//sladrehankArray[0] = s1;
	//sladrehankArray[1] = s2;

	/*
	27) opretter s1 som parametriseret constructor
	28) opretter s2 som parametriseret constructor
	29) opretter array objekt af typen sladrehank med 2 pladser. Dette opretter 2 default objekter, s3 og s4.
	31) index 0 = s1 objekt. Dette betyder at et nyt sladrehank objekt på index 0 bliver copy af s1.
	32) index 1 = s2 objekt. Dette betyder at et nyt sladrehank objekt på index 1 bliver copy af s2.
	*/


	//cout << "\nEksperiment 3 \"Insert 2 objects into array - 2\"\n\n";
	//const int SIZE = 2;
	//Sladrehank sladrehankArray[SIZE];

	//sladrehankArray[0] = Sladrehank("Instans s1");
	//sladrehankArray[1] = Sladrehank("Instans s2");

	/*
	45) opretter array objekt af typen sladrehank med 2 pladser.Dette opretter 2 default objekter, s1 og s2.
	47) index 0, s1 = s3 objekt. Dette betyder at et nyt objekt, s3, bliver oprettet ved parametriseret constructor, hvorefter denne kopieres til s1, index 0. Dette nedlægger s3 objektet.
	48) index 1, s2 = s4 objekt. Dette betyder at et nyt objekt, s4, bliver oprettet ved parametriseret constructor, hvorefter denne kopieres til s2, index 1. Dette nedlægger s4 objektet.
	*/


	cout << "\nEksperiment 4 \"Insert multiple objects into array without copy-elements\"\n\n";
	const int SIZE = 5;
	Sladrehank* mySladrehankPtr[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		string s = ("Instans s");
		char c = i+49;
		mySladrehankPtr[i] = new Sladrehank(s + c);
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		delete mySladrehankPtr[i];
	}
	return 0;
}