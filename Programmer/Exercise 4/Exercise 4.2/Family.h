#pragma once
#include "Person.h"

class Family
{
public:
	Family(Person, Person, Person, Person);
	void print() const;

private:
	Person dad_;
	Person mum_;
	Person son_;
	Person daughter_;
};

