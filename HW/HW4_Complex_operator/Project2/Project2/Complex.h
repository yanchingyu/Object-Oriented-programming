#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <sstream>
using namespace std;

class Complex {
private:
	int re, im;
public:
	Complex();
	Complex(int re, int im);
	void complex(int re, int im);

	Complex add(const Complex &comp);
	Complex subtract(const Complex &comp);
	Complex multiply(const Complex &comp);
	
	string toString();

	Complex operator+(const Complex &comp);
	Complex operator-(const Complex &comp);
	Complex operator*(const Complex &comp);
	friend ostream &operator<<(ostream &out, const Complex &comp);
	friend istream &operator>>(istream &in, Complex &comp);
	int &operator[](int index);
	Complex operator+=(const Complex &comp);
	Complex operator-=(const Complex &comp);
	Complex operator*=(const Complex &comp);
	Complex &operator++();
	Complex &operator--();
	Complex operator++(int);
	Complex operator--(int);
	Complex operator+();
	Complex operator-();
};
#endif 