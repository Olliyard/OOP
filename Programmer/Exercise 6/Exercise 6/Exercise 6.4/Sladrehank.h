#pragma once
#include <string>
#include <vector>

using namespace std;

// Klassen SLadrehank har blot til formål at udskrive en besked, hver
// gang et objekt (instans) bliver oprettet, slettet eller kopieret.

class Sladrehank
{
public:
	// Det er disse 5 metoder (constructorer/destructor/assignment operator vi gerne vil holde øje med
	Sladrehank();										// Default constructor
	Sladrehank(const string& nameRef);					// Explicit defineret constructor (når objekt skal have et bestemt navn)
	Sladrehank(const Sladrehank& original);				// Copy constructor
	Sladrehank& operator=(const Sladrehank& original);	// Assignment operator
	~Sladrehank();										// Destructor

	// Disse 3 metoder, bruges bare til at lave pæne udskrifter når
	// instanser oprettes eller nedlægges. Disse detaljer er ikke vigtige.
	unsigned int getId() const;
	static unsigned int getNaesteId();
	static unsigned int getInstansTaeller();

private:
	unsigned int id_;							// Id for objektet (instansen)
	string name_;								// Navnet på objektet (instansen)
	static unsigned int instansTaeller;			// Antal instanser der er oprettet
	static unsigned int naesteId;				// Id for næste instans der oprettes.
};