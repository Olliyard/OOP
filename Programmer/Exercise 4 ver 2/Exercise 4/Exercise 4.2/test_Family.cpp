// Projekt		øvelser 2. semester
//
// Fil			test_Person.cpp
//
// Beskrivelse	Test af klassen Person
//
// Forfatter	NVJ
//
// Version		1.0 - 310811 - oprindelig version

#include "Family.h"


int main()
{
	Person far("111111-1111", "Peter", "Lars", "Hansen");
	Person mor("222222-2222", "Lone", "Hansen");
	const Person boy("333333-3333", "Kurt", "Bent", "Hansen");
	Person daughter("444444-4444", "Lise", "Lotte", "Hansen");
	Family fam1(far, mor, boy, daughter);
	fam1.print();
	return 0;
}