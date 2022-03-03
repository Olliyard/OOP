#include "Queue.h"

Queue::Queue()
{
	capacity_ = 1;
	size_ = 0;
	queuePtr_ = new int[capacity_];

	if (queuePtr_ == nullptr)
	{
		exit(1);
	}

	for (size_t i = 0; i < capacity_; i++)
	{
		queuePtr_[i] = 0;
	}
}

bool Queue::operator+=(int newElement)
{
	if (size_ < capacity_ /*&& (capacity_ % 2 == 1)*/) //det udkommenterede kunne også implementeres, men det står i princippet i første del af if sætning.
	{
		queuePtr_[size_++] = newElement;
	}

	else if (size_ == capacity_ && capacity_ != MAX_CAPACITY)
	{
		int* tempPtr = queuePtr_;			//opret tempPtr til at gemme nuværende værdier for queuePtr.

		capacity_ *= 2;						//fordobler capacity
		if (capacity_ > MAX_CAPACITY)		//hvis capacity efter fordobling er større end max capacity sættes capacity til max capacity værdi
		{
			capacity_ = MAX_CAPACITY;
		}

		queuePtr_ = new int[capacity_];		//opret nyt array med ny størrelse capacity

		for (size_t i = 0; i < size_; i++)
		{
			queuePtr_[i] = tempPtr[i];		//lig gamle værdier gemt i tempPtr tilbage i queuePtr
		}

		queuePtr_[size_++] = newElement;

		delete[] tempPtr;
	}

	else
	{
		return false;
	}
}

Queue& Queue::operator=(Queue& qRef)
{
	if (this != &qRef)					//hvis de to ikke i forvejen er lig hinanden
	{
		if (capacity_ != qRef.capacity_)	//hvis de to capacity ikke er ens
		{
			capacity_ = qRef.capacity_;		//sætter ens capacity
			delete[] queuePtr_;				//slet queuePtr
			queuePtr_ = new int[capacity_];	//opret ny queuepointer med ny capacitet
			if (queuePtr_ == nullptr)
			{
				exit(1);
			}
			size_ = qRef.size_;				//sæt ens size

			for (size_t i = 0; i < size_; i++)
			{
				queuePtr_[i] = qRef.queuePtr_[i];	//fyld copy med de nye værdier.
			}
		}
	}
	return *this;
}

int Queue::front() const
{
	if (size_ == 0)
	{
		return 0;
	}
	else
	{
		return queuePtr_[0];
	}
}

void Queue::pop()
{
	if (size_ != 0)
	{
		for (size_t i = 0; i < size_ - 1; i++)
		{
			queuePtr_[i] = queuePtr_[i + 1];
		}
		size_--;
	}

}

void Queue::print() const
{
	cout << "The current elements in the queue: ";
	for (size_t i = 0; i < size_; i++)
	{
		cout << queuePtr_[i] << " ";
	}
	cout << endl;
	cout << "The current size of the queue: " << size_ << endl;
	cout << "The current capacity of the queue: " << capacity_ << endl;
	cout << endl;
}

ostream& operator<<(ostream& coutRef, Queue& qRef)
{
	qRef.print();
	return coutRef;
}
