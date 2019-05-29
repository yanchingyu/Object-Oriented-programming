#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape2D.h"

class Rectangle : public Shape2D {
private:
	double width, height;
public:
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height, string color, bool filled);

	void setWidth(double width);
	void setHeight(double height);
	double getWidth();
	double getHeight();

	string toString();

	double getArea();
	double getPerimeter();
};
#endif