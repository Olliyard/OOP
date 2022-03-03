#pragma once
#include <iostream>

using namespace std;

class NummerStander
{
public:
	NummerStander();
	void traekNummer();
	int getNaesteNummerIKoe();

private:
	int senestTrukneNummer_;
	int senestEkspederedeNummer_;
};

