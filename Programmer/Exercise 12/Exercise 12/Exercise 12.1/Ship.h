#pragma once
#include <iostream>
using namespace std;

class Ship
{
public:
	Ship();
	Ship(char* type, int x, int y);
	Ship(const Ship& shipCopy);
	~Ship();
	void setPosition(int x, int y);
	void getPosition(int& x, int& y);
	void setType(char* type);
	double distance(const Ship& sRef) const;
	void show() const;

protected:
	char* type_;

private:
	int x_;
	int y_;
};

