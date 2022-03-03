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
private:
	double x_;
	double y_;
};
