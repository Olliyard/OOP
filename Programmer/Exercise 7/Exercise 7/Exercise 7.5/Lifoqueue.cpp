#include "Lifoqueue.h"

template < typename myType >
Lifoqueue<myType>::Lifoqueue()
{
	firstFreeIndex_ = 0;

	for (int i = 0; i < QUEUE_LENGTH; i++)
		queueArray_[i] = 0;
}

template < typename myType >
bool Lifoqueue<myType>::insert(myType localInt)
{
	if (!isFull())
	{
		queueArray_[firstFreeIndex_++] = localInt;
		return true;
	}

	return false;
}

template < typename myType >
bool Lifoqueue<myType>::remove(myType& intRef)
{
	if (!isEmpty())
	{
		intRef = queueArray_[--firstFreeIndex_];
		return true;
	}

	return false;
}

template < typename myType >
bool Lifoqueue<myType>::isEmpty() const
{
	return (firstFreeIndex_ == 0);
}

template < typename myType >
bool Lifoqueue<myType>::isFull() const
{
	return (firstFreeIndex_ == QUEUE_LENGTH);
}

template < typename myType >
void Lifoqueue<myType>::clear()
{
	firstFreeIndex_ = 0;
}