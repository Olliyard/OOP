#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(int size)
{
	size_ = (size > 0 ? size : 10);
	freeSpace_ = size_;

	data_ = new int[size];

	if (data_ == nullptr)
	{
		exit(1);
	}

	for (size_t i = 0; i < size_; ++i)
	{
		data_[i] = 0;
	}
}

PriorityQueue::~PriorityQueue()
{
	delete[] data_;
}

bool PriorityQueue::push(int value)
{
	if (value > 0 && freeSpace_ > 0)
	{
		for (size_t i = 0; i < size_; i++)
		{
			if (data_[i] == 0)
			{
				data_[i] = value;
				--freeSpace_;
				return true;
			}
		}
	}
	else
	{
		return false;
	}
}

int PriorityQueue::pop()
{
	int maxIndex = 0, maxVal = data_[0];	//maxIndex og maxVal s�ttes hhv. til 0 og til index 0 for data_. Dette skyldes, g�r blot, at maxVal har noget at sammenligne med. Denne kunne i princippet s�ttes som v�rende 0.
	if (freeSpace_ < size_)					//hvis freespace er mindre end size er der stadig ledige pladser. I det tilf�lde at freespace == size ville queue v�re fyldt.
	{
		for (size_t i = 1; i < size_; i++)
		{
			if (data_[i] > maxVal)			//er index i tal st�rre end index 0 data?
			{
				maxVal = data_[i];			//maxval er nu lig det st�rste tal
				maxIndex = i;				//index opdateres.
			}
		}
		data_[maxIndex] = 0;				//s�tter maxindex plads = 0
		++freeSpace_;						//t�ller antal fripladser op
		return maxVal;						//returnerer max v�rdi
	}
	else
	{
		return 0;
	}

}

int PriorityQueue::getSize() const
{
	return size_;
}

int PriorityQueue::getFreeSpace() const
{
	return freeSpace_;
}

const int* PriorityQueue::getData() const
{
	return data_;
}

ostream& operator<<(ostream& coutRef, const PriorityQueue& pqRef)
{
	const int* myPtr = pqRef.getData();

	for (size_t i = 0; i < pqRef.getSize(); i++)
	{
		if (myPtr != 0)
		{
			coutRef << myPtr[i] << " ";
		}
	}
	coutRef << endl;

	return coutRef;
}
