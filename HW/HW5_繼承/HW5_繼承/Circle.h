#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"

class Circle : public Shape2D {
private:
	double radius, PI = 3.14159;
public:
	Circle();
	Circle(double radius, string color, bool filled);

	void setRadius(double radius);
	double getRadius();

	string toString();

	double getArea();
	double getPerimeter();
};
#endif