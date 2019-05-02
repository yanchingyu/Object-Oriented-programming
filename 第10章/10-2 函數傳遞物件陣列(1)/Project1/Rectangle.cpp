#include "Rectangle.h"

Rectangle::Rectangle(double newWidth, double newHeight)
{
	width = newWidth;
	height = newHeight;
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

