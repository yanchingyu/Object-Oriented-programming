#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <sstream>
using namespace std;

class Point {
public:
	int num1, num2;

	Point();
	Point(int num1, int num2);
	
	Point add( Point &point2);
	Point subtract(Point &point2);
	string toString();

	
};
#endif 