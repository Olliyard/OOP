// Project		Exercises 2. semester
//
// File			Point.h
//
// Description	Interface to class Point
//
// Author		NVJ
//
// Version		1.0 - 230204 - original version

#pragma once

#include <iostream>

using namespace std;


class Point
{
public:
	Point(double x = 0, double y = 0);
	void setX(double);
	void setY(double);
	double getX() const;
	double getY() const;
	void print() const;
	void operator+=(const Point& pRef1);
	bool operator==(const Point& pRef1);

private:
	double x_;
	double y_;
};

/*
Der anvendes reference for ostream objektet, da denne ikke længere er kaldende (dette skyldes at denne er en fri funktion og dermed kan ikke anvendes ved cout.operator.
Dette skyldes, at for output operatoren er Point reference read-only value og der kan dermed ikke ændres på værdien ved denne. Det samme gør sig ikke gældende
ved input operatoren, da denne skal have mulighed for at ændre for referenceværdi for Point.
*/
ostream& operator<<(ostream&, const Point&);
istream& operator>>(istream&, Point&);
const Point operator+(const Point& pRef1, const Point& pRef2);
const Point operator-(const Point& pRef1, const Point& pRef2);
