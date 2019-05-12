#include "Ball.h"

Ball::Ball(double radius, string color)
{
	this->radius = radius;
	setColor(color);
}

double Ball::getRadius()
{
	return radius;
}

double Ball::getArea() 
{
	return 4 * PI*pow(radius, 2);
}

double Ball::getVolume() 
{
	return 4.0 / 3 * PI*pow(radius, 3);
}
