// Project		Exercises 2. semester
//
// File			Point.cpp
//
// Description	Implementation of class Point
//
// Author		NVJ
//
// Version		1.0 - 230204 - original version

#include "Point.h"

/*
Spørgsmål i 9.4
Personligt ville jeg implementere operatorerne til sammenligning som de er. + og - operatorerne kunne måske med fordel blive implementeret som medlemsoperatorer. I dette tilfælde hvor der er implementeret
set og get metoder betyder det ikke det store, men medlemdsfunktion vil være mest oplagt på tværs af alle klasser.

Her er det blot nødvendigt at tilføje endnu en const Person& reference. Dette skyldes, at medlemsoperatorene bliver oversat af compileren til at være et funktionskald (p1.operator) hvor
en fri funktion ikke har samme funktionskald og dermed skal implementeres med reference til begge objekter.

Se ovenstående svar. Det er blot muligt at fjerne get-metoderne og i stedet anvende de udarbejde set-metoder. Derudover fjernes reference til den ene af objekterne.

*/

Point::Point(double x, double y)
{
	setX(x);
	setY(y);
}


void Point::setX(double xCoor)
{
	if (xCoor < 0 || 100 < xCoor)
	{
		cout << "\nFejl i x-koordinaten. x sat til 0.0\n";
		xCoor = 0.0;
	}

	x_ = xCoor;
}


void Point::setY(double yCoor)
{
	if (yCoor < 0 || 100 < yCoor)
	{
		cout << "\nFejl i y-koordinaten. y sat til 0.0\n";
		yCoor = 0.0;
	}

	y_ = yCoor;
}


double Point::getX() const
{
	return x_;
}


double Point::getY() const
{
	return y_;
}


void Point::print() const
{
	cout << "(" << x_ << " , " << y_ << ")";
}

void Point::operator+=(const Point& pRef1)
{
	setX(x_ + pRef1.x_);
	setY(y_ + pRef1.y_);
}

bool Point::operator==(const Point& pRef1)
{
	return (x_ == pRef1.x_ && y_ == pRef1.y_);
}

ostream& operator<<(ostream&coutRef, const Point&pointRef)
{
	coutRef << "(" << pointRef.getX() << " " << pointRef.getY() << ")";

	return coutRef;
}

istream& operator>>(istream&cinRef, Point&pointRef)
{
	double x, y;
	cinRef >> x >> y;
	pointRef.setX(x);
	pointRef.setY(y);

	return cinRef;
}

const Point operator+(const Point& pRef1, const Point& pRef2)
{
	return Point((pRef1.getX() + pRef2.getX()), (pRef1.getY() + pRef2.getY()));
}

const Point operator-(const Point& pRef1, const Point& pRef2)
{
	return Point((pRef1.getX() - pRef2.getX()), (pRef1.getY() - pRef2.getY()));
}
