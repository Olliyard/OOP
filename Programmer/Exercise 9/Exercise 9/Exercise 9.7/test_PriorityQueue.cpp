#include "PriorityQueue.h"

int main()
{
	PriorityQueue pq1(12);

	cout << pq1;

	for (size_t i = 0; i < pq1.getSize() +1 ; i++)
	{
		pq1.push(i);
	}

	cout << pq1;

	pq1.pop();
	pq1.pop();
	cout << pq1;

	pq1.push(23);
	pq1.push(9);
	cout << pq1;

	pq1.pop();
	cout << pq1;

	return 0;
}