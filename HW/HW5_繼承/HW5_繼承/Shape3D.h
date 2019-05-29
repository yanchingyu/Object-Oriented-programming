#ifndef SHAPE3D_H
#define SHAPE3D_H
#include "Shape.h"

class Shape3D : public Shape {

public:
	virtual double getVolume() = 0;
};
#endif