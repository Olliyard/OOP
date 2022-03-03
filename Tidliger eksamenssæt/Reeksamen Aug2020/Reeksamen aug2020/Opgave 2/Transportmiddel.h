#pragma once
#include <iostream>
using namespace std;

class Transportmiddel
{
public:
	Transportmiddel(const string& maerkeOgModel = "", int topfart = 100);	//der sættes også default på her til constructor for fly
	void setTopfart(int topfart);
	int getTopfart() const;
	virtual int beregnRejsetid(int distance);
	void print() const;

protected:
	string maerkeOgModel_;

private:
	int topfart_;
};

