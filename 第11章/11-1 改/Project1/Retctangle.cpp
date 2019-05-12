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

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}

double Rectangle::getArea()
{
	return height * width;
}

void Rectangle::swapByReference(Rectangle & r2)
{
	cout << "swapByReference:" << this->getArea() << " " << r2.getArea();
	Rectangle temp = *this;
	*this = r2;
	r2 = temp;
	cout << " to " << this->getArea() << " " << r2.getArea();
}

void Rectangle::swapByPointer(Rectangle * r2)
{
	cout << "swapByPointer:" << this->getArea() << " " << (*r2).getArea();
	Rectangle temp = *this;
	*this = *r2;
	*r2 = temp;
	cout << " to " << this->getArea() << " " << (*r2).getArea();
}
