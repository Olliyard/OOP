#pragma once
#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>
using namespace std;

class DataStorage
{
public:
	DataStorage();
	DataStorage(int size, double initvalue);
	DataStorage& insert(double);
	int numberOfElements()	const;
	double meanValue()	const;
	int numberOfElementsBetween(double, double)	const;
	int eraseElementsBetween(double, double);
	void print()	const;

private:
	vector<double> data_;
};

