#pragma once
#include <iostream>

using namespace std;

class Person
{
public:
	Person(const string& sSN = "000000-0000", const string& fN = "N", const string& lN = "N");
	Person(const string& sSN, const string& fN, const string& mN, const string& lN);
	~Person();		//denne anvendes ved number of persons, hjælper med at destructe personer :0
	void setFirstName(const string&);
	void setMiddleName(const string&);
	void setLastName(const string&);
	void getData(string&, string&, string&, string&)	const;
	static int getNumberOfPersons();
	void printPartially()	const;
	void printAll()	const;
	bool checkForSameName(const Person&)	const;

private:
	string firstName_;
	string middleName_;
	string lastName_;
	string socialSecNumber_;
	static int numberOfPersons_;
};

