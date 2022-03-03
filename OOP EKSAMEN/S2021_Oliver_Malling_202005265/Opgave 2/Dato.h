#pragma once
#include <iostream>

class Dato
{
public:
	Dato(int = 1, int = 1, int = 1900);
	int getDag() const;
	int getM�ned() const;
	int get�r() const;
	void print() const;
private:
	int tjekDag(int) const;
	int dag_;
	int m�ned_;
	int �r_;
};

std::ostream& operator<<(std::ostream& coutRef, const Dato& datoRef);