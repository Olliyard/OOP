#include "Member.h"

int Member::numberOfMembers_ = 0;

Member::Member(const string& firstName, const string& lastName, int memberNumber)
{
	firstName_ = firstName;
	lastName_ = lastName;
	memberNumber_ = (1000 <= memberNumber && memberNumber <= 9999 ? memberNumber : 0);
	numberOfMembers_++;
}

Member::~Member()
{
	numberOfMembers_++;
}

string Member::getFirstName() const
{
	return firstName_;
}

string Member::getLastName() const
{
	return lastName_;
}

int Member::getMemberNumber() const
{
	return memberNumber_;
}

int Member::getNumberOfMembers()
{
	return numberOfMembers_;
}

void Member::print() const
{
	cout << lastName_ << ", " << firstName_ << ", " << memberNumber_ << endl;
}
