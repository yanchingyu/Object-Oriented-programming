#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <sstream>
using namespace std;
class Rational {
private:
	int n, d;  // ¤À¤l:numerator  ¤À¥À: denominator
	static int gcd(int n, int d);
public:
	Rational();
	Rational(int n, int d);
	void rational(int n, int d);

	Rational add(Rational r1) const;
	Rational substract(Rational r1) const;
	Rational multiply(Rational r1) const;
	Rational divide(Rational r1) const;
	string toString() const;

	double operator<(Rational &r1);
	bool operator<=(Rational r1);
	bool operator>(Rational r1);
	bool operator>=(Rational r1);
	bool operator==(Rational r1);
	bool operator!=(Rational r1);
	Rational operator+(Rational r1);
	Rational operator-(Rational r1);
	Rational operator*(Rational r1);
	Rational operator/(Rational r1);

	friend ostream &operator<<(ostream &out, Rational &r1);
	friend istream &operator>>(istream &in, Rational &r1);
	int operator[](int index);
	Rational operator+=(Rational &r1);
	Rational operator-=(Rational &r1);
	Rational operator*=(Rational &r1);
	Rational operator/=(Rational &r1);
	Rational &operator++();
	Rational &operator--();
	Rational operator+();
	Rational operator-();
};
#endif 