#include "Person.h"

int Person::numberOfPersons_ = 0;

Person::Person(const string& sSN, const string& fN , const string& lN )
{
	middleName_ = "";
	socialSecNumber_ = sSN;
	firstName_ = fN;
	lastName_ = lN;
	numberOfPersons_++;
}

Person::Person(const string& sSN , const string& fN , const string& mN, const string& lN )
{
	socialSecNumber_ = sSN;
	firstName_ = fN;
	middleName_ = mN;
	lastName_ = lN;
	numberOfPersons_++;
}

Person::~Person()
{
}

void Person::setFirstName(const string&fN)
{
	firstName_ = fN;
}

void Person::setMiddleName(const string&mN)
{
	middleName_ = mN;
}

void Person::setLastName(const string&lN)
{
	lastName_ = lN;
}

void Person::getData(string&sSN, string&fN, string&mN, string&lN)	const
{
	sSN = socialSecNumber_;
	fN = firstName_;
	mN = middleName_;
	lN = lastName_;
}

int Person::getNumberOfPersons()
{
	return numberOfPersons_;
}

void Person::printPartially() const
{
	string birthday = socialSecNumber_.substr(0, 6);
	string mid_initial = (middleName_ != "" ? middleName_.substr(0, 1) + ". " : "");
	cout << "Navn: " << firstName_ << " " << mid_initial << lastName_ << endl;
	cout << "Født: " << birthday << endl;
	cout << endl;
}

void Person::printAll() const
{
	cout << "Navn: " << lastName_ << ", " << firstName_ + " " + middleName_ << endl;
	cout << "Personnr.: " << socialSecNumber_ << endl;
	cout << endl;
}

bool Person::checkForSameName(const Person& person)	const
{
	if (person.firstName_ == firstName_)
	{
		if (person.middleName_ == middleName_)
		{
			if (person.lastName_ == lastName_)
			{
				return true;
			}
		}
	}
	else
	{
		return false;
	}
}
