#include "Flyttebil.h"

int main()
{
	Flyttekasse kasse1(10, 10, 10);
	Flyttebil bil1(20);
	cout << "Der er plads til " << bil1.beregnAntalFlyttekasser(kasse1) << " flyttekasser i flyttebilen" << endl;
	bil1.fyldTomFlyttebil(kasse1, 500);		//for lavt antal
	bil1.toemFlyttebil();					
	bil1.fyldTomFlyttebil(kasse1, 2000);	//for højt antal

	bil1 += kasse1;							//+= operator

	return 0;
}