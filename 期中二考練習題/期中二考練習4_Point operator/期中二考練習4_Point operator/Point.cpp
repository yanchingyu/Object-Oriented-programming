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

Point Point::add(const Point &point2) const
{
	Point _point;
	_point.num1 = this->num1 + point2.num1;
	_point.num2 = this->num2 + point2.num2;
	return _point;
}

Point Point::subtract(const Point &point2) const
{
	Point _point;
	_point.num1 = this->num1 - point2.num1;
	_point.num2 = this->num2 - point2.num2;
	return _point;
}

string Point::toString() const
{
	stringstream ss;
	ss.clear();
	ss << "(" << num1
		<< "," << num2
		<< ")";

	return ss.str();
}

ostream &operator<<(ostream &out, const Point & point)
{
	out << "(" << point.num1 << "," << point.num2 << ")";
	return out;
}

Point operator+(const Point & r1, const Point & r2)
{
	return r1.add(r2);
}

Point operator-(const Point & r1, const Point & r2)
{
	return r1.subtract(r2);
}
