#pragma once
#include "Display.h"
#include "NummerStander.h"


class KasseKnap
{
public:
	KasseKnap(Display*, NummerStander*);
	void tryk();

private:
	Display* displayPtr_;
	NummerStander* nummerPtr_;
};

