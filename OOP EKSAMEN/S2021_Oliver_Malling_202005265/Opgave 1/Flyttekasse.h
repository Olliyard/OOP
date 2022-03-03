#pragma once

class Flyttekasse
{
public:
	Flyttekasse(int b = 50, int h = 35, int d = 35);
	double beregnVolumen() const;	// Flyttekassens volumen i Liter
private:
	int bredde_;	// Måles i centimeter
	int højde_;		// Måles i centimeter
	int dybde_;		// Måles i centimeter
};