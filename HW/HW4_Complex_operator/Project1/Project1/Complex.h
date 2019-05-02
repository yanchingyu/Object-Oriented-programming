#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Complex {
public:
	int re, im;

	Complex();
	Complex(int re, int im);

	Complex add(const Complex &r2);
	Complex subtract(const Complex &r2);
	Complex multiply(const Complex &r2);
	string toString();

	Complex operator+();
	Complex operator-();
	int operator[](int index);
	Complex operator+=(const Complex &r2);
	Complex operator-=(const Complex &r2);
	Complex operator*=(const Complex &r2);
	Complex &operator++();
	Complex &operator--();

	friend ostream &operator<<(ostream &out, const Complex &complex);
	friend istream &operator>>(istream &in, const Complex &complex);
};

Complex operator+(Complex &r1, Complex &r2);
Complex operator-(Complex &r1, Complex &r2);
Complex operator*(const Complex &r1, const Complex &r2);

#endif 
