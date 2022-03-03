#pragma once
#include <iostream>
#include <String>

using namespace std;

class Person
{
public:
	Person(const string& sSn = "000000-0000", const string& fN = "N", const string& lN = "N");
	Person(const string& sSn, const string& fN, const string& mN, const string& lN);
	~Person();
	void setFirstName(const string&);
	void setMiddleName(const string&);
	void setLastName(const string&);
	void getData(string&, string&, string&, string&)	const;
	static int getNumberOfPersons();
	void printPartially()	const;
	void printAll()	const;
	bool checkForSameName(const Person&) const;

private:
	string firstName_;
	string middleName_;
	string lastName_;
	string socialSecNumber_;
	static int numberOfPersons_;
};

