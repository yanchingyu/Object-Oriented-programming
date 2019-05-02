#include "Point.h"

Point::Point()
{
	num1 = 1;
	num2 = 1;
}

Point::Point(int num1, int num2)
{
	this->num1 = num1;
	this->num2 = num2;
}

Point Point::add(Point &point2)
{
	this->num1 += point2.num1;
	this->num2 += point2.num2;
	return *this;
}

Point Point::subtract( Point &point2)
{
	this->num1 -= point2.num1;
	this->num2 -= point2.num2;
	return *this;
}

string Point::toString()
{
	stringstream ss;
	ss.clear();
	ss << "(" << num1
		<< "," << num2
		<< ")";

	return ss.str();
}


