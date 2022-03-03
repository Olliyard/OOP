// Projekt		2. semester exercises
//
// Fil			Date.cpp
//
// Beskrivelse	Implementation of class Date
//
// Forfatter	NVJ
//
// Version		1.0 - 220812 - original version
//				1.1 - 160116 - new method names
#include "Date.h"


Date::Date(int day, int month, int year)
{
	set(day, month, year);
}


bool Date::set(int d, int m, int y)
{
	day_ = d;
	month_ = m;
	year_ = y;

	if (validate() == false)
	{
		day_ = month_ = 1;
		year_ = 1900;
		return false;
	}

	return true;
}


void Date::print() const
{
	cout << (day_ < 10 ? "0" : "") << day_ << ".";
	cout << (month_ < 10 ? "0" : "") << month_ << ".";
	cout << year_ << endl;
}


bool Date::validate() const
{
	static const int daysPerMonth[13] = { 0, 31, 29, 31, 30, 31, 30,
									   31, 31, 30, 31, 30, 31 };

	if (year_ < 1900)													// valid year?
		return false;
	if (month_ < 1 || month_ > 12)										// valid month?
		return false;
	if (day_ < 1 || day_ > daysPerMonth[month_])						// valid day?
		return false;
	if (month_ == 2 && day_ == 29)										// February 29.?
		if (!(year_ % 4 == 0 && (year_ % 100 != 0 || year_ % 400 == 0)))	// not leap year?
			return false;

	return true;														// everything okay :)
}