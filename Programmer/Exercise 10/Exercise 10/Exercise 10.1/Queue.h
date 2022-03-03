/*
10.1
Metode Queue skal oprettet dynamisk array med størrelse size_
pop()
operator+=

10.2
hvis (plads ledig og capacity %2 == 1)
indsæt newelement
return true

hvis (!plads ledig og capacity != maxcapacity)
capacity *= 2
indsæt newelement
return true

hvis (!plads ledig og capacity = maxcapacity)
!indsæt newelement
return false

10.7
I det tilfælde vil q2 da blive copy af q1 og vil pop q1 front værdi. q1 bevares og vil stadig have det originale queueptr array.

10.8
Det er vigtigt at huske på at gemme data for array i en tempPtr så dette bevares.
*/
#pragma once
#include <iostream>
#define MAX_CAPACITY 256
using namespace std;

class Queue
{
public:
	Queue();
	bool operator+=(int newElement);
	Queue& operator=(Queue& qRef);
	int front() const;
	void pop();
	void print() const;

private:
	int size_;
	int capacity_;
	int* queuePtr_;
};

ostream& operator<<(ostream& coutRef, Queue& qRef);