#include <string>
#include <iostream>

using namespace std;

class ClassD
{
public:
	ClassD(const int, string);
	void print() const;
private:
	const int MAXSIZE_;
	string name_;
};

ClassD::ClassD(const int MAXSIZE, string name) :MAXSIZE_(MAXSIZE)
{
	if (MAXSIZE_ < name.length())
	{
		cout << "Error: too many characters in name. Name shortened\n";
		name = name.substr(0, MAXSIZE_);
	}

	name_ = name;
}

void ClassD::print() const
{
	cout << name_ << endl;
}