#include "Cube.h"

Cube::Cube(double length, string color)
{
	this->length = length;
	setColor(color);
}

double Cube::getLength()
{
	return length;
}

double Cube::getArea() const
{
	return 6 * pow(length, 2);
}

double Cube::getVolume() const
{
	return pow(length, 3);
}
