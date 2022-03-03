#pragma once
#include <iostream>
#include "Point.h"

using namespace std;

class CircularBuffer
{
public:
	CircularBuffer(int spaces = 0);
	~CircularBuffer();
	CircularBuffer& insert(Point);
	double meanValue()	const;
	void print()	const;

private:
	int size_;
	int newestIndex_;
	Point* arrayPtr_;
};

