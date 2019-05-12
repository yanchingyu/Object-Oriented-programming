#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <sstream>
using namespace std;

class Point {
private:
	int num1, num2;
public:
	Point();
	Point(int num1, int num2);

	Point add(const Point &point2) const;
	Point subtract(const Point &point2) const;
	string toString() const;

	friend ostream &operator<<(ostream &out, const Point &point);
};

Point operator+(const Point &r1, const Point &r2);
Point operator-(const Point &r1, const Point &r2);

#endif 