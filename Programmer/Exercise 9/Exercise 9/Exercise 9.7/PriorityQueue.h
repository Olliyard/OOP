#pragma once
#include <iostream>
using namespace std;

class PriorityQueue
{
public:
	PriorityQueue(int size);
	~PriorityQueue();
	bool push(int value);
	int pop();
	int getSize() const;
	int getFreeSpace() const;
	const int* getData() const;

private:
	int size_;
	int freeSpace_;
	int* data_;
};

ostream& operator<<(ostream& coutRef, const PriorityQueue& pqRef);