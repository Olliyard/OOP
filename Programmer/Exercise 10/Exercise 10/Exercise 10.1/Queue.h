/*
10.1
Metode Queue skal oprettet dynamisk array med st�rrelse size_
pop()
operator+=

10.2
hvis (plads ledig og capacity %2 == 1)
inds�t newelement
return true

hvis (!plads ledig og capacity != maxcapacity)
capacity *= 2
inds�t newelement
return true

hvis (!plads ledig og capacity = maxcapacity)
!inds�t newelement
return false

10.7
I det tilf�lde vil q2 da blive copy af q1 og vil pop q1 front v�rdi. q1 bevares og vil stadig have det originale queueptr array.

10.8
Det er vigtigt at huske p� at gemme data for array i en tempPtr s� dette bevares.
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