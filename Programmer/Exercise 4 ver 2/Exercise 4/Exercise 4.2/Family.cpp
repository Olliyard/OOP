#include "Family.h"

Family::Family(const Person&d, const Person&m, const Person&s, const Person&dd)
{
	dad_ = d;
	mum_ = m;
	son_ = s;
	daughter_ = dd;
}

void Family::print() const
{
	cout << "The family consists of: " << endl;

	cout << dad_.printAll() << ", " << mum_.printAll() << ", " << son_.printAll() << " and " << daughter_.printAll() << endl;
}
