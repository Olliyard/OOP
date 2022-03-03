#include "CircularBuffer.h"

int main()
{
	CircularBuffer<char> buffer1(12);

	buffer1.print();
	buffer1.insert(1);
	buffer1.print();
	buffer1.insert(2);
	buffer1.insert(3);
	buffer1.insert(4);
	buffer1.insert(5);
	buffer1.insert(6);
	buffer1.insert(7);
	buffer1.insert(8);
	buffer1.insert(9);
	buffer1.insert(10);
	buffer1.insert(11);
	buffer1.insert(12);
	buffer1.print();
	cout << "Mean value is: " << buffer1.meanValue() << endl;
	buffer1.meanValue();
	buffer1.insert(20);
	buffer1.print();
	cout << "Mean value is: " << buffer1.meanValue() << endl;
	return 0;
}