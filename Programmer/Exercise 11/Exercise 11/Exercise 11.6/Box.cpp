#include "Box.h"

Box::Box(const string& name, const string& type)
{
	boxName_ = name;
	itemsType_ = type;
	numberOfItems_ = 0;
}

Box& Box::operator++()
{
	numberOfItems_++;
	return *this;
}

Box Box::operator++(int right)
{
	Box temp = *this;
	++(*this);
	return temp;
}

Box& Box::operator--()
{
	numberOfItems_--;
	return *this;
}

Box Box::operator--(int right)
{
	Box temp = *this;
	--(*this);
	return temp;
}

void Box::print() const
{
	cout << boxName_ << " indeholder " << numberOfItems_ << " " << itemsType_ << endl;
}

ostream& operator<<(ostream& coutRef, const Box& bRef)
{
	bRef.print();
	return coutRef;
}
