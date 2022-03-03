#include "Family.h"

Family::Family(Person dad, Person mum, Person son, Person daughter)
{
	dad_ = dad;
	mum_ = mum;
	son_ = son;
	daughter_ = daughter;
}

void Family::print() const
{
	cout << "The family consists of the following members" << endl;
	cout << endl;
	cout << "Dad: " << endl; 
	dad_.printAll();
	cout << "Mother: " << endl;
	mum_.printAll();
	cout << "Son: " << endl;
	son_.printAll();
	cout << "Daughter: " << endl;
	daughter_.printAll();
}
