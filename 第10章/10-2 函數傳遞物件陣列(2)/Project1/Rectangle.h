#ifndef RECTANGLE_H
#define RECTAnGlE_H

class Rectangle {
public:
	Rectangle();
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