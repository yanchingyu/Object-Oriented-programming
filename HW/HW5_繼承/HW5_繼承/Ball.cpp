#include "Ball.h"

Ball::Ball()
{
	radius = 1;
}

Ball::Ball(double radius, string color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

void Ball::setRadius(double radius)
{
	this->radius = radius;
}

double Ball::getRadius()
{
	return radius;
}

string Ball::toString()
{
	stringstream ss;
	ss << "ball, " << radius;
	return ss.str();
}

double Ball::getArea()
{
	return 4 * PI * pow(radius, 2);
}

double Ball::getVolume()
{
	return 4.0 / 3 * PI * pow(radius, 3);
}
