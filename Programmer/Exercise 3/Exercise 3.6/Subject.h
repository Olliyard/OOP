#include <iostream>
#include "WebLink.h"

using namespace std;

#pragma once
class Subject
{
public:
	Subject(string);
	void setLink(const WebLink*);
	const WebLink* getLink()	const;
	void printText()	const;

private:
	string text_;
	const WebLink* link_;

};

