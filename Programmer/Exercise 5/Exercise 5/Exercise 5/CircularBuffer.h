#pragma once
#include <iostream>

using namespace std;

/*
a) Diskuter hvordan buffer virker - 
Bufferen fungerer ved at inds�tte en given m�ngde r�kker i et array, hvorefter denne har mulighed for at tildele
disse r�kker v�rdier. Ved et givent punkt inds�ttes nye tal - og gamle udskiftes. Dette kan fordelagtigt v�re midt i bufferen,
i starten eller til sidst i denne. Fra start af indeholder den ingen v�rdi (0 p� alle pladser) indtil den fyldes op til det �nskede punkt.

b)
Allokering af hukommelsen vil med fordel s�ttes p� plads 0 og deallokeres p� sidste plads i bufferen.

c)
Forholdet mellem disse vil altid v�re newestindex = oldindex-1. Hvis det nyeste tal er indsat p� plads 1 s� m� det n�ste tal ogs� skulle inds�ttes p� plads 1

d)
Denne gemmer en kopi af v�rdien for CircularBuffer, da denne erkl�res som v�rende en reference til denne. Det vil sige at CircularBuffer kan
�ndre v�rdi p� samme tid med at den gamle v�rdi gemmes fra insert().
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

