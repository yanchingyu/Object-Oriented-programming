#include "Shape.h"

Shape::Shape()
{
	color = "";
	filled = "false";
}

Shape::Shape(const string &color, bool filled)
{
	this->color = color;
	this->filled = filled;
}

void Shape::setColor(const string &color)
{
	this->color = color;
}

void Shape::setFilled(bool filled)
{
	this->filled = filled;
}

bool Shape::getFilled() const
{
	return filled;
}

string Shape::getColor() const
{
	return color;
}

string Shape::toString()
{
	return this->toString();
}


