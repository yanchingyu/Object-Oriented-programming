#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

class GeometricObject {
private:
	string color;
public:
	GeometricObject();
	GeometricObject(string color);

	void setColor(string color);
	string getColor();
};
#endif