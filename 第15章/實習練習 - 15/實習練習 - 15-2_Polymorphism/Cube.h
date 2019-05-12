#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject {
private:
	double length;
public:
	Cube(double length, string color);

	double getLength();

	double getArea() ;
	double getVolume() ;
};
#endif