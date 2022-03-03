#include "Person.h"


Person::Person(string name, int age)
{
	name_ = name;
	age_ = (age > 0 ? age : 0);
}


void Person::print() const
{
	cout << name_ << " " << age_ << " \x86r";;
}
