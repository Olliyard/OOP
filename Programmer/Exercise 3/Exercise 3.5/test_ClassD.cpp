#include "ClassD.h"

int main()
{
	ClassD nameLong(5, "Malling");
	ClassD nameShort(10, "Oliver");

	nameLong.print();
	nameShort.print();

	return 0;
}