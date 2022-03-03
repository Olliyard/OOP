// Project		2. semester exercises
//
// File			Rectangle.cpp
//
// Description	Implementation of class Rectangle
//
// Author		NVJ
//
// Version		1.2 - 230812 - minimal changes

#include "Rectangle.h";

Rectangle::Rectangle(double xTL, double yTL, double xBR, double yBR)
{
	xTopLeft_ = yTopLeft_ = 0;
	setXBottomRight(xBR);
	setYBottomRight(yBR);
	setXTopLeft(xTL);
	setYTopLeft(yTL);
}


void Rectangle::setXTopLeft(double xTopL)
{
	if (xTopL < 0 || xTopL > 100 || xTopL >= xBottomRight_)
	{
		cout << "\nFejl i xTopLeft-koordinat - sat til 0.\n";
		xTopL = 0.0;
	}
	xTopLeft_ = xTopL;
}


void Rectangle::setYTopLeft(double yTopL)
{
	if (yTopL < 0 || yTopL > 100 || yTopL >= yBottomRight_)
	{
		cout << "\nFejl i yTopLeft-koordinat - sat til 0.\n";
		yTopL = 0.0;
	}
	yTopLeft_ = yTopL;
}


void Rectangle::setXBottomRight(double xBotR)
{
	if (xBotR < 0 || xBotR > 100 || xBotR <= xTopLeft_)
	{
		cout << "\nFejl i xBottomRight-koordinat - sat til 100.\n";
		xBotR = 100.0;
	}
	xBottomRight_ = xBotR;
}


void Rectangle::setYBottomRight(double yBotR)
{
	if (yBotR < 0 || yBotR > 100 || yBotR <= yTopLeft_)
	{
		cout << "\nFejl i yBottomRight-koordinat - sat til 100.\n";
		yBotR = 100.0;
	}
	yBottomRight_ = yBotR;
}


double Rectangle::getXTopLeft() const
{
	return xTopLeft_;
}


double Rectangle::getYTopLeft() const
{
	return yTopLeft_;
}


double Rectangle::getXBottomRight() const
{
	return xBottomRight_;
}


double Rectangle::getYBottomRight() const
{
	return yBottomRight_;
}


double Rectangle::hight() const
{
	return (yBottomRight_ - yTopLeft_);
}


double Rectangle::width() const
{
	return (xBottomRight_ - xTopLeft_);
}


double Rectangle::perimeter() const
{
	return (2 * (hight() + width()));
}


double Rectangle::area() const
{
	return (hight() * width());
}


bool Rectangle::isSquare() const
{
	return (hight() != 0 && hight() == width());
}


void Rectangle::print() const
{
	cout << "\nOverste venstre hjorne: (" << xTopLeft_;
	cout << " , " << yTopLeft_ << ")";
	cout << "\nNederste hojre hjorne: (" << xBottomRight_;
	cout << " , " << yBottomRight_ << ")\n";
}