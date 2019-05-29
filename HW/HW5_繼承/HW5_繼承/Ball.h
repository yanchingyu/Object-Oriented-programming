#ifndef BALL_H
#define BALL_H
#include "Shape3D.h"

class Ball : public Shape3D {
private:
	double radius;
	double PI = 3.14159;
public:
	Ball();
	Ball(double radius, string color, bool filled);

	void setRadius(double radius);
	double getRadius();

	string toString();

	double getArea() ;
	double getVolume() ;
};
#endif