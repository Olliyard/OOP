#pragma once

#include "windows.h"

class Cursor
{
public:
	Cursor();
	void cursorToXY(short x, short y);
private:
	HANDLE handleToConsoleWindow_;
};