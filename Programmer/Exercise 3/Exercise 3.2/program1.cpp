#include <stdio.h>

int main()
{
	float x, y, z;

	printf_s("Indtast 2 decimaltal");
	printf_s("\nTal 1: ");
	scanf_s("%d", &x);
	printf_s("\nTal 2: ");
	scanf_s("%d", &y);

	z = x / y;
	printf_s("%d divideret med %d er %d\n", x, y, z);

	return 0;
}