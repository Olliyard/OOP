#include <iostream>
#include "Person.h"
using namespace std;

/*
Template virker ikke med Person -- dette kunne måske skyldes, at template for print ikke rigtigt medtager alt den nødvendige information / det er ikke muligt at printe, grundet ??
*/

template < typename isEqual >
bool isEqualTo(isEqual a, isEqual b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template < typename myType >
void print(myType a, myType b)
{
	if (isEqualTo(a, b) == true)
	{
		cout << a << " and " << b << " are equal" << endl;
	}
	else
	{
		cout << a << " and " << b << " are not equal" << endl;
	}
}

int main()
{
	//int x, y;
	//double x, y;
	//char x, y;

	Person Ole("Ole", 22);
	Person Per("Per", 23);

	//cout << "Please enter two values:" << endl;
	//cin >> x >> y;

	print(Ole, Per);

	return 0;
}