#pragma once

#include <iostream>

using namespace std;


class Display
{
public:
	Display(int);
	void opdater(int) const;
private:
	int idNummer_;			// gyldige værdier: 1, 2, 3
};