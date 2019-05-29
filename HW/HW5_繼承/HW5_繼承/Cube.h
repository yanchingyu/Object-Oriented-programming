#ifndef CUBE_H
#define CUBE_H
#include "Shape3D.h"

class Cube : public Shape3D {
private:
	double length;
public:
	Cube();
	Cube(double length, string color, bool filled);

	void setLength(double length);
	double getLength();

	string toString();

	double getArea();
	double getVolume();
};
#endif