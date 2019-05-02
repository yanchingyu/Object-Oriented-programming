#include "Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
	height = 1;
	width = 1;
}

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

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::getArea() const
{
	numOfRect++;
	return width*height;
}

int Rectangle::getNumOfRect()
{
	return numOfRect;
}
