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
	static void swapByReference(Rectangle &r1, Rectangle &r2);
	static void swapByPointer(Rectangle *r1, Rectangle *r2);

};
#endif 