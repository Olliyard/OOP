#pragma once

class Flyttekasse
{
public:
	Flyttekasse(int b = 50, int h = 35, int d = 35);
	double beregnVolumen() const;	// Flyttekassens volumen i Liter
private:
	int bredde_;	// M�les i centimeter
	int h�jde_;		// M�les i centimeter
	int dybde_;		// M�les i centimeter
};