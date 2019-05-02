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

Complex Complex::add(const Complex & r2)
{
	Complex _complex;
	_complex.re = this->re + r2.re;
	_complex.im = this->im + r2.im;
	return _complex;
}

Complex Complex::subtract(const Complex & r2)
{
	Complex _complex;
	_complex.re = this->re - r2.re;
	_complex.im = this->im - r2.im;
	return _complex;
}

Complex Complex::multiply(const Complex & r2)
{
	Complex _complex;
	_complex.re = this->re * r2.re + this->im * r2.im;
	_complex.im = this->re * r2.im + this->im * r2.re;
	return _complex;
}

string Complex::toString()
{
	stringstream ss;
	ss << re;
	if (im > 0)
		ss << "+" << im << "i";
	else
		ss << im << "i";
	return ss.str();
}

Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-re, -im);
}

int Complex::operator[](int index)
{
	if (index == 0)
		return re;
	else if (index == 1)
		return im;
}

Complex Complex::operator+=(const Complex & r2)
{
	*this = add(r2);
	return *this;
}

Complex Complex::operator-=(const Complex & r2)
{
	*this = subtract(r2);
	return *this;
}

Complex Complex::operator*=(const Complex & r2)
{
	*this = multiply(r2);
	return *this;
}

Complex & Complex::operator++()
{
	re++;
	return *this;
}

Complex & Complex::operator--()
{
	re--;
	return *this;
}

ostream & operator<<(ostream & out, const Complex & complex)
{
	out << complex.re;
	if (complex.im > 0)
		out << "+" << complex.im << "i";
	else
		out << complex.im << "i";
	return out;
}

istream & operator>>(istream & in, Complex & complex)
{
	in >> complex.re;
	in >> complex.im;
	return in;
}

Complex operator+(Complex &r1,  Complex &r2)
{
	return r1.add(r2);
}

Complex operator-(Complex &r1, Complex &r2)
{
	return r1.subtract(r2);
}

Complex operator*(const Complex & r1, const Complex & r2)
{
	Complex _complex;
	_complex.re = r1.re * r2.re - r1.im * r2.im;
	_complex.im = r1.re * r2.im + r1.im * r2.re;
	return _complex;
}


