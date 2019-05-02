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

void Rectangle::swapByReference(Rectangle & r1, Rectangle & r2)
{
	cout << "swapByReference:" << r1.getArea() << " " << r2.getArea();
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;
	cout << " to " << r1.getArea() << " " << r2.getArea();
}

void Rectangle::swapByPointer(Rectangle * r1, Rectangle * r2)
{
	cout << "swapByPointer:" << (*r1).getArea() << " " << (*r2).getArea();
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
	cout << " to " << (*r1).getArea() << " " << (*r2).getArea();
}
