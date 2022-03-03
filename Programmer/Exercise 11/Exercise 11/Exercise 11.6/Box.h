#pragma once
#include <iostream>
using namespace std;

class Box
{
public:
	Box(const string& name, const string& type);
	Box& operator++();
	Box operator++(int);
	Box& operator--();
	Box operator--(int);
	void print() const;

private:
	string boxName_;
	string itemsType_;
	int numberOfItems_;
};

ostream& operator<<(ostream&, const Box&);