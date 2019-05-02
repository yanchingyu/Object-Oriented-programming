#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;
	static int num;
public:
	Rectangle();

	void setWidth(int width);
	void setHeight(int height);

	int getWidth();
	int getHeight();

	int getArea();
	int getNum();
	static void sum(Rectangle rectArray[], int size);
};
#endif 