#pragma once
#include <iostream>

using namespace std;

/*
a) Diskuter hvordan buffer virker - 
Bufferen fungerer ved at indsætte en given mængde rækker i et array, hvorefter denne har mulighed for at tildele
disse rækker værdier. Ved et givent punkt indsættes nye tal - og gamle udskiftes. Dette kan fordelagtigt være midt i bufferen,
i starten eller til sidst i denne. Fra start af indeholder den ingen værdi (0 på alle pladser) indtil den fyldes op til det ønskede punkt.

b)
Allokering af hukommelsen vil med fordel sættes på plads 0 og deallokeres på sidste plads i bufferen.

c)
Forholdet mellem disse vil altid være newestindex = oldindex-1. Hvis det nyeste tal er indsat på plads 1 så må det næste tal også skulle indsættes på plads 1

d)
Denne gemmer en kopi af værdien for CircularBuffer, da denne erklæres som værende en reference til denne. Det vil sige at CircularBuffer kan
ændre værdi på samme tid med at den gamle værdi gemmes fra insert().
*/

class CircularBuffer
{
public:
	CircularBuffer(int spaces = 0);
	~CircularBuffer();
	CircularBuffer& insert(int);
	double meanValue()	const;
	void print()	const;
	
private:
	int size_;
	int newestIndex_;
	int* arrayPtr_;
};

