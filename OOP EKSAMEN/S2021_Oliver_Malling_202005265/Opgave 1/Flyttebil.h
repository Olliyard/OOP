#pragma once
#include "Flyttekasse.h"
#include <list>
#include <iostream>
using namespace std;

class Flyttebil
{
public:
	Flyttebil(int kapacitet = 10);
	int beregnAntalFlyttekasser(const Flyttekasse& flyttekasse);
	void fyldTomFlyttebil(const Flyttekasse& flyttekasse, int antal);
	void toemFlyttebil();
	void operator+=(const Flyttekasse& flyttekasseRef);

private:
	int kapacitet_;
	list<const Flyttekasse*> indhold_;
};

