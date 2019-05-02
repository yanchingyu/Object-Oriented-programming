#include "Date.h"

Date::Date()
{
	month = 1;
	day = 1;
	year = 1;
}

void Date::setDate(int month, int day, int year)
{
	this->month = month;
	this->day = day;
	this-> year = year;
}

void Date::setYear(int year)
{
	this->year = year;
}

int Date::getYear()
{
	return year;
}

void Date::print()
{
	cout << month << "/" << day << "/" << year;
}

