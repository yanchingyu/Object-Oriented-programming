#ifndef SHAPE2D_H
#define SHAPE2D_H
#include "Shape.h"

class Shape2D : public Shape {

public:
	virtual double getPerimeter() = 0;
};
#endif