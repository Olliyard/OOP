#pragma once
#include "Person.h"

class Family
{
public:
	Family(const Person&d, const Person&m, const Person&s, const Person&dd);
	void print() const;

private:
	Person dad_;
	Person mum_;
	Person son_;
	Person daughter_;
};

