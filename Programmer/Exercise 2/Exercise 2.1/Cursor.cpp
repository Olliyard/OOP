#include <iostream>

#include "Cursor.h"

using namespace std;


Cursor::Cursor()
{
	handleToConsoleWindow_ = GetStdHandle(STD_OUTPUT_HANDLE);
}


// Upper lefr corner is (0,0).
// x-axis is horisontal left to right. y-axis is vertical top to bottom
void Cursor::cursorToXY(short x, short y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(handleToConsoleWindow_, Pos);
}