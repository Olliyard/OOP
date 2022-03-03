#pragma once

#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
	Person(string = "Ukendt", int = 0);
	void print() const;
private:
	int age_;
	string name_;
};