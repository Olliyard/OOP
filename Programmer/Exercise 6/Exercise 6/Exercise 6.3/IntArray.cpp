// Projekt		eksempler 2. semester
//
// Fil			eksempel 3_3.cpp
//
// Beskrivelse	eksempel på dynamisk lagerallokering
//				implementering af klassen IntArray
//
// Forfatter	NVJ
//
// Version		1.0 - 120905 - oprindelig version

//6.3 spørgsmål
/*
a) Det vil være fornuftigt at kaste dem i "if (arrayPtr_ == NULL)" da dette er de eneste tilfælde hvor en mulig fejl kunne forekomme.
b) Done
c) Intet sker.
d) Programmet kører ikke, da der sker en fejl idet MemoryAllocationException i sig selv ikke indeholder den anvendte logik til styring af exceptions.
Dette betyder at der blot forekommer fejl i koden.
e) Det er fornuftigt at catch i main-programmet, gerne efter at et try er udført. Med fordel kunne hele main inkapsuleres i én stor try block.
f) Done
g) Ingen ændringer.
h) Næsten ingen ændringer ifht. originale program - Det fungerer dog bedre, god implementering kunne være at vise hvad der blev forsøgt at gøre før exception kastes?

*/

#include "IntArray.h"
#include "MemoryAllocationException.h"


IntArray::IntArray(int size)
{
	arraySize_ = (size > 0 ? size : 10);

	arrayPtr_ = new int[arraySize_];
	//arrayPtr_ = NULL;					//det kunne overvejes om pointeren permanent sættes til NULL og dermed altid går til "exit(1)"

	if (arrayPtr_ == NULL)					// sikrer at programmet afsluttes hvis // her kunne der smides exception
	{										// det IKKE lykkes at allokere hukommelsen
		throw MemoryAllocationException(true);
	}

	for (int i = 0; i < arraySize_; i++)
		arrayPtr_[i] = 0;
}


void IntArray::setArraySize(int size)
{
	if (size <= 0)
	{
		cout << "\nChanging arraysize: Cannot change size to " << size << ". Size must be positive. No changes made.\n";
		return;
	}

	if (size == arraySize_)
	{
		cout << "\nChanging arraysize: Array already have size " << size << ". No changes made.\n";
		return;
	}

	if (size > arraySize_)
	{
		cout << "\nChanging arraysize. Increase size to " << size << ".\n";

		int* tempPtr = arrayPtr_;

		arrayPtr_ = new int[size];
		//arrayPtr_ = NULL;					//Her vil den køre alt indtil den nye size er større en den forrige hvorefter den vil exit.

		if (arrayPtr_ == NULL)					// sikrer at ingen ændringer foretages hvis	// exception
		{										// det IKKE lykkes at allokere hukommelsen
			arrayPtr_ = tempPtr;				// der sker fejl her, da arrayPtr som anvendes i eksekvering ikke henviser til noget (NULL) (denne skal have værdi for print funktionen).
			throw MemoryAllocationException(false);
		}

		for (int i = 0; i < arraySize_; i++)
			arrayPtr_[i] = tempPtr[i];			//fylder de allerede allokerede pladser med gammel data

		for (int i = arraySize_; i < size; i++)	//fylder de nye pladser med 0'er
			arrayPtr_[i] = 0;

		arraySize_ = size;						//sætter den nye arraysize

		delete[] tempPtr;						//undgår dangling pointer
	}

	if (size < arraySize_)
	{
		cout << "\nChanging arraysize. Decrease size to " << size << ". Some date will be lost.\n";

		int* tempPtr = arrayPtr_;

		arrayPtr_ = new int[size];
		//arrayPtr_ = NULL;					//her vil den køre alt frem til at size sættes mindre end tidligere size hvorefter den vil exit.

		if (arrayPtr_ == NULL)					// sikrer at ingen ændringer foretages hvis // exception
		{										// det IKKE lykkes at allokere hukommelsen
			arrayPtr_ = tempPtr;
			throw MemoryAllocationException(false);
		}

		for (int i = 0; i < size; i++)
			arrayPtr_[i] = tempPtr[i];

		arraySize_ = size;

		delete[] tempPtr;
	}
}


int IntArray::getArraySize() const
{
	return arraySize_;
}


void IntArray::insertNumber(int number, int index)
{
	if (index >= 0 && index < arraySize_)
	{
		arrayPtr_[index] = number;
	}
}


void IntArray::print() const
{
	cout << endl;

	for (int i = 0; i < arraySize_; i++)
		cout << arrayPtr_[i] << " ";

	cout << endl;
}


IntArray::~IntArray()
{
	delete[] arrayPtr_;
}