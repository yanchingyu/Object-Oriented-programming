#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double newHeight, double newWidth)
{
	height = newHeight;
	width = newWidth;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getArea()
{
	return height*width;
}
