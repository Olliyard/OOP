// Project		2. semester exercises
//
// File			Rectangle.h
//
// Description	Definition of class Rectangle
//
// Author		NVJ
//
// Version		1.2 - 230812 - minimal changes

#pragma once

#include <iostream>

using namespace std;


class Rectangle
{
public:
	Rectangle(double xTL = 0, double yTL = 0, double xBR = 100, double yBR = 100);

	void setXTopLeft(double);
	void setYTopLeft(double);
	void setXBottomRight(double);
	void setYBottomRight(double);

	double getXTopLeft() const;
	double getYTopLeft() const;
	double getXBottomRight() const;
	double getYBottomRight() const;

	double hight() const;
	double width() const;
	double perimeter() const;
	double area() const;
	bool isSquare() const;
	void print() const;

private:
	double xTopLeft_;
	double yTopLeft_;
	double xBottomRight_;
	double yBottomRight_;
};
