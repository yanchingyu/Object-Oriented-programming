#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
}

Rectangle::Rectangle(double width, double height, string color, bool filled)
{
	this->width = width;
	this->height = height;
	setColor(color);
	setFilled(filled);
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

string Rectangle::toString()
{
	stringstream ss;
	ss << "rectangle, " << width << ", " << height;
	return ss.str();
}

double Rectangle::getArea()
{
	return width * height;
}

double Rectangle::getPerimeter()
{
	return 2 * (width + height);
}
