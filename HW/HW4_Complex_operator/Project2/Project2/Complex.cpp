#include "Complex.h"

Complex::Complex()
{
	re = 0; 
	im = 0;
}

Complex::Complex(int re, int im)
{
	this->re = re;
	this->im = im;
}

void Complex::complex(int re, int im)
{
	this->re = re;
	this->im = im;
}

Complex Complex::add(const Complex &comp)
{
	Complex _comp;
	_comp.re = this->re + comp.re;
	_comp.im = this->im + comp.im;
	return _comp;
}

Complex Complex::subtract(const Complex &comp)
{
	Complex _comp;
	_comp.re = this->re - comp.re;
	_comp.im = this->im - comp.im;
	return _comp;
}

Complex Complex::multiply(const Complex & comp)
{
	Complex _comp;
	_comp.re = this->re * comp.re - this->im * comp.im;
	_comp.im = this->re * comp.im + this->im * comp.re;
	return _comp;
}

string Complex::toString()
{
	stringstream ss;
	if (this->im < 0) {
		ss << this->re << this->im << "i";
	}
	else
		ss << this->re << "+" << this->im << "i";

	return ss.str();
}

Complex Complex::operator+(const Complex & comp)
{
	return add(comp);
}

Complex Complex::operator-(const Complex & comp)
{
	return subtract(comp);
}

Complex Complex::operator*(const Complex & comp)
{
	return multiply(comp);
}

int & Complex::operator[](int index)
{
	if (index == 0)
		return this->re;
	else if (index == 1)
		return this->im;
	else
		cout << "error";
}

Complex Complex::operator+=(const Complex & comp)
{
	*this = add(comp);
	return *this;
}

Complex Complex::operator-=(const Complex & comp)
{
	*this = subtract(comp);
	return *this;
}

Complex Complex::operator*=(const Complex & comp)
{
	*this = multiply(comp);
	return *this;
}

Complex & Complex::operator++()
{
	this->re++;
	return *this;
}

Complex & Complex::operator--()
{
	this->re--;
	return *this;
}

Complex Complex::operator++(int)
{
	Complex temp(re, im);
	re += 1;
	return temp;
}

Complex Complex::operator--(int)
{
	Complex temp(re, im);
	re -= 1;
	return temp;
}

Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-re, -im);
}

ostream & operator<<(ostream & out, const Complex & comp)
{
	if (comp.im < 0) {
		out << comp.re << comp.im << "i";
	}
	else
		out << comp.re << "+" << comp.im << "i";

	return out;
}

istream & operator>>(istream & in, Complex & comp)
{
	in >> comp.re >> comp.im;
	return in;
}
