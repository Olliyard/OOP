#include "Queue.h"

int main()
{
	Queue q1;

	q1 += 12;
	q1 += 15;
	q1 += 17;
	cout << q1;

	Queue q2;
	q2 = q1;
	cout << q2;
	cout << "Front of q2: " << q2.front() << endl;
	q2.pop();
	cout << q1;
	cout << q2;

	return 0;
}