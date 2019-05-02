#include "Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
	numOfRect++;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
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
	return height * width;
}

int Rectangle::getNumOfRect()
{
	return numOfRect;
}


