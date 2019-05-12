#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle {
private:
	double width, height;
public:
	Rectangle();
	Rectangle(double width, double height);

	void setWidth(double width);
	void setHeight(double height);

	double getArea();
	void swapByReference(Rectangle &r2);
	void swapByPointer(Rectangle *r2);

};
#endif 