#include "DataStorage.h"

DataStorage::DataStorage()
{

}

DataStorage::DataStorage(int size, double initvalue)
{
	data_.assign(size, initvalue);
}

DataStorage& DataStorage::insert(double element)
{
	data_.push_back(element);
	return *this;
}

int DataStorage::numberOfElements() const
{
	return data_.size();
}

double DataStorage::meanValue() const
{
	double i = accumulate(data_.begin(), data_.end(), 0.0) / data_.size();

	return i;
}

int DataStorage::numberOfElementsBetween(double low, double high) const
{
	int elementsBetween = 0;
	for (auto it = data_.begin(); it != data_.end(); ++it)
	{
		if (*it >= low && *it <= high)
		{
			++elementsBetween;
		}
	}

	return elementsBetween; 
}

int DataStorage::eraseElementsBetween(double low, double high)
{
	int erasedBetween = 0;
	for (auto it = data_.begin(); it != data_.end(); ++it)
	{
		if (*it >= low && *it <= high)
		{
			data_.erase(it);
			++erasedBetween;
		}
	}

	return erasedBetween;
}

void DataStorage::print() const
{
	copy(data_.begin(), data_.end(), ostream_iterator<double>(cout, " "));
	cout << endl;
}
