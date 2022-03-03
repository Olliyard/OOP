#pragma once

const int QUEUE_LENGTH = 10;

template <typename myType = int>
class Lifoqueue
{
public:
	Lifoqueue()
	{
		firstFreeIndex_ = 0;
	}

	bool insert(myType& localInt)
	{
		if (!isFull())
		{
			queueArray_[firstFreeIndex_++] = localInt;
			return true;
		}

		return false;
	}

	bool remove(myType& intRef)
	{
		if (!isEmpty())
		{
			intRef = queueArray_[--firstFreeIndex_];
			return true;
		}

		return false;
	}

	bool isEmpty() const
	{
		return (firstFreeIndex_ == 0);
	}

	bool isFull() const
	{
		return (firstFreeIndex_ == QUEUE_LENGTH);
	}

	void clear()
	{
		firstFreeIndex_ = 0;
	}
private:
	int firstFreeIndex_;
	myType queueArray_[QUEUE_LENGTH];
};