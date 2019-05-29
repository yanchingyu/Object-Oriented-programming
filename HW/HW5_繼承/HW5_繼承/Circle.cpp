#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double radius, string color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::getRadius()
{
	return radius;
}

string Circle::toString()
{
	stringstream ss;
	ss << "circle, " << radius;
	return ss.str();
}

double Circle::getArea()
{
	return pow(radius, 2) * PI;
}

double Circle::getPerimeter()
{
	return 2 * radius * PI;
}
