#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball: public GeometricObject {
private:
	double radius;
	double PI = 3.14159;
public:
	Ball(double radius, string color);

	double getRadius();

	double getArea() const;
	double getVolume() const;
};
#endif