#pragma once
#include "Member.h"
#include <list>

class Club
{
public:
	Club(const string& clubName);
	const Club& operator+=(const Member& right);
	const Club& operator-=(const Member& right);
	int getNumberOfMembers() const;
	void print() const;

private:
	string clubName_;
	list<Member> memberList_;
};

