#include "KasseKnap.h"

KasseKnap::KasseKnap(Display*display, NummerStander*nummer)
{
	displayPtr_ = display;
	nummerPtr_ = nummer;
}

void KasseKnap::tryk()
{
	int n = nummerPtr_->getNaesteNummerIKoe();
	if (n == -1)
	{
		cout << "Der er ikke flere i foran dig" << endl;
	}
	else
	{
		displayPtr_->opdater(n);
	}
}