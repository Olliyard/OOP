#include "Person.h"

int Person::numberOfPersons_ = 0;		//remember to set the static value of the attribute, if not set, will result in unresolved externals.

Person::Person(const string& sSn, const string& fN, const string& lN)
{
	socialSecNumber_ = sSn;
	firstName_ = fN;
	middleName_ = "";
	lastName_ = lN;
	numberOfPersons_++;				//count static value +1 each time new person i created.
}

Person::Person(const string& sSn, const string& fN, const string& mN, const string& lN)
{
	socialSecNumber_ = sSn;
	firstName_ = fN;
	middleName_ = mN;
	lastName_ = lN;
	numberOfPersons_++;
}

Person::~Person()
{
	numberOfPersons_--;			//count static value -1 each time person is destroyed.
}

void Person::setFirstName(const string& fN)
{
	firstName_ = fN;
}

void Person::setMiddleName(const string& mN)
{
	middleName_ = mN;
}

void Person::setLastName(const string& lN)
{
	lastName_ = lN;
}

void Person::getData(string& sSN, string& fN, string& mN, string& lN) const
{
	sSN = socialSecNumber_;
	fN = firstName_;
	mN = middleName_;
	lN = lastName_;
}

int Person::getNumberOfPersons()
{
	return numberOfPersons_;			//the static int attribute can be used with the static member function.
}

void Person::printPartially() const
{
	cout << "Navn: " << firstName_ << " ";
	if (middleName_ != "")					//check if middlename is different from default value, if so, print correct name
		cout << middleName_.at(0) << ". ";

	cout << lastName_ << endl;
	cout << "F\x9B" << "dt: " << socialSecNumber_.substr(0, 6) << endl;
}

void Person::printAll() const
{
	cout << "Navn: " << lastName_ << ", " << firstName_ << " " << middleName_ << endl;
	cout << "Personnr.: " << socialSecNumber_ << endl;
}

bool Person::checkForSameName(const Person& person) const
{

	if (firstName_ == person.firstName_ && middleName_ == person.middleName_ && lastName_ == person.lastName_)
	{
		return true;
	}
	else
	{
		return false;
	}
}