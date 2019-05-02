#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle {
private:
	double width, height;
	static int numOfRect;
public:
	Rectangle();

	void setWidth(double width);
	void setHeight(double height);

	double getWidth() const;
	double getHeight() const;

	double getArea() const;
	static int getNumOfRect();

};
#endif 