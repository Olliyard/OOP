#pragma once
#include <iostream>

using namespace std;

template <typename type>
class CircularBuffer
{
public:
	CircularBuffer(int spaces = 0)
	{
		size_ = (spaces > 0 ? spaces : 10);
		newestIndex_ = -1;	//Dette skyldes det tidligere ben�vnte sammenh�ng mellem �ldste og nyeste plads i bufferen.
		arrayPtr_ = new type[size_];
		for (size_t i = 0; i < size_; i++)
		{
			arrayPtr_[i] = 0;		//arrayet initialiseres p� f�lgende m�de, da der ellers anvendes for meget plads.
		}
	}

	~CircularBuffer()
	{
		delete[] arrayPtr_;
	}

	CircularBuffer& insert(const type&numb)
	{
		(++newestIndex_) %= size_;		//overvej om der er plads til at t�lles nyeste index op, eller om dette har samme st�rrelse som arrayet.
		arrayPtr_[newestIndex_] = numb;	//nyeste index bliver da den nyeste indtastning.
		return *this;					//returner den g�ldende pointer for metoden, her anvendes *this pointeren til det.
	}

	type meanValue()	const
	{
		int mean = 0;
		for (size_t i = 0; i < size_; i++)
		{
			mean += arrayPtr_[i];
		}

		return (((type)mean) / size_);	//addition mellem double og int undg�s ved at kaste mean til en double v�rdi.
	}

	void print()	const
	{
		cout << "The current numbers in the buffer is" << endl;
		for (size_t j = 0; j < size_; j++)
		{
			cout << arrayPtr_[j] << " ";
		}
		cout << endl;
	}

private:
	int size_;
	int newestIndex_;
	type* arrayPtr_;
};