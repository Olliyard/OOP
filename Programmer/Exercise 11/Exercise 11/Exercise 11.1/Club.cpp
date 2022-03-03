#include "Club.h"

Club::Club(const string& clubName)
{
	clubName_ = clubName;
}

const Club& Club::operator+=(const Member& right)
{
	bool isInsert = false;
	list<Member>::iterator it;
	for (it = memberList_.begin(); it != memberList_.end(); ++it)
	{
		if (it->getLastName() > right.getLastName())
		{
			memberList_.insert(it, right);
			isInsert = true;
			break;
		}
	}

	if (isInsert == false)
	{
		memberList_.push_back(right);
	}
	return *this;
}

const Club& Club::operator-=(const Member& right)
{
	list<Member>::iterator it;
	for (it = memberList_.begin(); it != memberList_.end(); ++it)
	{
		if (it->getMemberNumber() == right.getMemberNumber())
		{
			it = memberList_.erase(it);
			break;
		}
	}

	return *this;
}

int Club::getNumberOfMembers() const
{
	return Member::getNumberOfMembers();
}

void Club::print() const
{
	cout << endl;
	cout << "Club: " << clubName_ << endl;
	cout << "Current members of " << clubName_ << " are:" << endl;
	list<Member>::const_iterator it;
	for (it = memberList_.begin(); it != memberList_.end(); ++it)
	{
		it->print();
	}
	cout << endl;
}
