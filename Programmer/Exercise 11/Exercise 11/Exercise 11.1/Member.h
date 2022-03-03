#pragma once
#include <iostream>
using namespace std;

class Member
{
public:
	Member(const string& firstName, const string& lastName, int memberNumber);
	~Member();
	string getFirstName() const;
	string getLastName() const;
	int getMemberNumber() const;
	static int getNumberOfMembers();
	void print() const;

private:
	string firstName_;
	string lastName_;
	int memberNumber_;
	static int numberOfMembers_;
};

