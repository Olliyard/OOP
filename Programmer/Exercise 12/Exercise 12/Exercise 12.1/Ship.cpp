#include "Ship.h"
#pragma warning(disable : 4996)

Ship::Ship()
{
	type_ = "Ukendt";
	x_ = 0;
	y_ = 0;
}

Ship::Ship(char* type, int x, int y)
{
	type_ = new char[strlen(type) + 1];
	if (type_ == nullptr)
	{
		exit(1);
	}
	strcpy(type_, type);

	x_ = x;
	y_ = y;
}

Ship::Ship(const Ship& shipCopy)
{
	cout << "** Ship copy-constructor ** " << endl;
	type_ = new char[strlen(shipCopy.type_) + 1];
	if (type_ == nullptr)
	{
		exit(1);
	}
	strcpy(type_, shipCopy.type_);

	setPosition(shipCopy.x_, shipCopy.y_);
}

Ship::~Ship()
{
	cout << "** Ship destructor **" << endl;
	delete[] type_;
}

void Ship::setPosition(int x, int y)
{
	x_ = x;
	y_ = y;
}

void Ship::getPosition(int& x, int& y)
{
	x = x_;
	y = y_;
}

void Ship::setType(char* type)
{
	type_ = type;
}

double Ship::distance(const Ship& sRef) const
{
	int xtemp, ytemp = 0;
	xtemp = x_ - sRef.x_;
	ytemp = y_ - sRef.y_;
	return (sqrt((double)(xtemp * xtemp + ytemp * ytemp)));
}

void Ship::show() const
{
	cout << "Type of ship: " << type_ << endl;
	cout << "Current coordinates: (" << x_ << ", " << y_ << ")" << endl;
}
