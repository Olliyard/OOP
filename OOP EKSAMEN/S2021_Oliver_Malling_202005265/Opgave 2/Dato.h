#pragma once
#include <iostream>

class Dato
{
public:
	Dato(int = 1, int = 1, int = 1900);
	int getDag() const;
	int getMåned() const;
	int getÅr() const;
	void print() const;
private:
	int tjekDag(int) const;
	int dag_;
	int måned_;
	int år_;
};

std::ostream& operator<<(std::ostream& coutRef, const Dato& datoRef);