#include "Rectangle.h"

int Rectangle::num = 0;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
	num++;
}

void Rectangle::setWidth(int width)
{
	this->width = width;
}

void Rectangle::setHeight(int height)
{
	this->height = height;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getHeight()
{
	return height;
}

int Rectangle::getArea()
{
	return height * width;
}

int Rectangle::getNum()
{
	return num;
}

void Rectangle::sum(Rectangle rectArray[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += rectArray[i].getArea();
	}
	cout << "Area: " << total;
}
