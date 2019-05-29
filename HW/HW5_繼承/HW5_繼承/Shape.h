#ifndef SHAPE_H
#define SHAPE_H
/*#include "Ball.h"
#include "Circle.h"
#include "Cube.h"
#include "Rectangle.h"*/

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape {
private:
	string color;
	bool filled;
public:
	Shape();
	Shape(const string &color, bool filled);

	void setColor(const string &color);
	void setFilled(bool filled);

	bool getFilled() const;
	string getColor() const;

	string toString();
	virtual double getArea() = 0;
};
#endif