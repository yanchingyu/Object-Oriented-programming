#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle(double, double);

	void setWidth(double);
	void setHeight(double);

	double getWidth();
	double getHeight();
	double getArea();

private:
	double width;
	double height;
};
#endif



