#include "Rectangle.h"


int main()
{
	cout << "==============================" << endl;
	cout << "Test case: Default constructor" << endl;
	cout << "------------------------------" << endl;
	Rectangle rectangle1;
	rectangle1.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor with explicit values" << endl;
	cout << "------------------------------" << endl;
	Rectangle rectangle2(0, 50, 50, 75);
	rectangle2.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor with illegal values" << endl;
	cout << "------------------------------" << endl;
	Rectangle rectangle3(-1, 101, -1, 101);
	rectangle3.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Constructor with x under and rigth of y" << endl;
	cout << "------------------------------" << endl;
	Rectangle rectangle4(50, 75, 0, 50);
	rectangle4.print();
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Mathematical methods" << endl;
	cout << "------------------------------" << endl;
	cout << "\nHojde: " << rectangle2.hight() << endl;
	cout << "Bredde: " << rectangle2.width() << endl;
	cout << "Omkreds: " << rectangle2.perimeter() << endl;
	cout << "Areal: " << rectangle2.area() << endl;
	cout << "==============================" << endl << endl;


	cout << "==============================" << endl;
	cout << "Test case: Logic method" << endl;
	cout << "------------------------------" << endl;
	if (rectangle2.isSquare())
		cout << "\nFirkanten er et kvadrat.\n";
	else
		cout << "\nFirkanten er ikke et kvadrat.\n";
	cout << "==============================" << endl << endl;

	return 0;
}