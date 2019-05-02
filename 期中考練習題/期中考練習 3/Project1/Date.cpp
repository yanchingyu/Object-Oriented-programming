#include "Date.h"

#include <iostream>
using namespace std;

Date::Date()
{
	year = 1;
	month = 1;
}

Date::Date(int newYear, int newMonth)
{
	year = newYear;
	month = newMonth;
}

void Date::setYear(int newYear)
{
	year = newYear;
}

void Date::setMonth(int newMonth)
{
	month = newMonth;
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

void Date::print()
{
	cout << year << "/" << month << endl;
}
