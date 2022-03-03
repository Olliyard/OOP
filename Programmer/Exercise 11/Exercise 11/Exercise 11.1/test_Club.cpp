#include "Club.h"

int main()
{
	Member memb1("Ole", "Hansen", 1200);
	Member memb2("Hans", "Larsen", 1212);
	Member memb3("Karl", "Haarbo", 1120);
	//memb1.print();
	//cout << memb1.getNumberOfMembers();

	Club club1("Liverpool");
	club1 += memb1;
	club1 += memb2;
	club1 += memb3;
	club1.print();

	cout << "Amount of members currently in club: " << club1.getNumberOfMembers() << endl;

	club1 -= memb1;
	club1.print();


	return 0;
}