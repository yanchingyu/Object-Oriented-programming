#include "Cube.h"

Cube::Cube()
{
	length = 1;
}

Cube::Cube(double length, string color, bool filled)
{
	this->length = length;
	setColor(color);
	setFilled(filled);
}

void Cube::setLength(double length)
{
	this->length = length;
}

double Cube::getLength()
{
	return length;
}

string Cube::toString()
{
	stringstream ss;
	ss << "cube, " << length;
	return ss.str();
}

double Cube::getArea() 
{
	return 6 * pow(length, 2);
}

double Cube::getVolume() 
{
	return pow(length, 3);
}
