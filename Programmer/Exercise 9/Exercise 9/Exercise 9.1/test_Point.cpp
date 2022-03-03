#include "Point.h"

int main()
{
	Point point1(2.3, 14.2);
	Point point2(4.7, 12.4);
	Point point3;

	cout << "Enter the value of object: " << endl;
	cin >> point3;
	cout << "First point is: " << point1 << endl;
	cout << "Second point is: " << point2 << endl;
	cout << "Third point is: " << point3 << endl;

	//Test af + operator
	Point pplus = point1 + point2;
	cout << "First point + second point is: " << pplus << endl;

	Point pminus = point1 - point2;
	cout << "Second point - third point is: " << pminus << endl;

	point1 += point2;
	cout << "First point += second point is: " << point1 << endl;

	if (point1 == point3)
	{
		cout << "Point 1 and point 3 are the same" << endl;
		cout << point1 << " == " << point3 << endl;
	}
	else
	{
		cout << "Point 1 and point 3 are NOT the same" << endl;
		cout << point1 << " != " << point3 << endl;
	}

	return 0;
}