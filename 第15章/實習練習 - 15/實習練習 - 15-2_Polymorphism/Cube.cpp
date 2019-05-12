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

double Cube::getArea() 
{
	return 6 * pow(length, 2);
}

double Cube::getVolume() 
{
	return pow(length, 3);
}
