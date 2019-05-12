#include "Rational.h"

int Rational::gcd(int n, int d)
{
	int min = n;
	if (min > d)
		min = d;
	for (int i = min; i > 1; i--) {
		if (n%i == 0 && d%i == 0)
			return i;
	}
	return 1;
}

Rational::Rational()
{
	n = 0;
	d = 0;
}

Rational::Rational(int n, int d)
{
	this->n = n;
	this->d = d;
}

void Rational::rational(int n, int d)
{
	this->n = n;
	this->d = d;
}

Rational Rational::add(Rational r1) const
{
	Rational _rational;
	if (this->d == r1.d) {
		_rational.n = this->n + r1.n;
		_rational.d = this->d;
		return _rational;
	}
	else {
		_rational.n = this->n * r1.d + r1.n * this->d;
		_rational.d = this->d * r1.d;
		return _rational;
	}
}

Rational Rational::substract(Rational r1) const
{
	Rational _rational;
	if (this->d == r1.d) {
		_rational.n = this->n - r1.n;
		_rational.d = this->d;
		return _rational;
	}
	else {
		_rational.n = this->n * r1.d - r1.n * this->d;
		_rational.d = this->d * r1.d;
		return _rational;
	}
}

Rational Rational::multiply(Rational r1) const
{
	Rational _rational;
	_rational.n = this->n * r1.n;
	_rational.d = this->d * r1.d;
	return _rational;
}

Rational Rational::divide(Rational r1) const
{
	Rational _rational;
	_rational.n = this->n * r1.d;
	_rational.d = this->d * r1.n;
	return _rational;
}

string Rational::toString() const
{
	stringstream ss;
	ss  << this->n << "/" << this->d;
	return ss.str();
}

double Rational::operator<(Rational &r1)
{
	double first, second;
	first = 1.0 * this->n / this->d;
	second = 1.0 * r1.n / r1.d;
	if (first < second) 
		return true;
	else
		return false;
}

bool Rational::operator<=(Rational r1)
{
	double first, second;
	first = 1.0 * this->n / this->d;
	second = 1.0 * r1.n / r1.d;
	if (first <= second)
		return true;
	else
		return false;
}

bool Rational::operator>(Rational r1)
{
	double first, second;
	first = 1.0 * this->n / this->d;
	second = 1.0 * r1.n / r1.d;
	if (first > second)
		return true;
	else
		return false;
}

bool Rational::operator>=(Rational r1)
{
	double first, second;
	first = 1.0 * this->n / this->d;
	second = 1.0 * r1.n / r1.d;
	if (first >= second)
		return true;
	else
		return false;
}

bool Rational::operator==(Rational r1)
{
	double first, second;
	first = 1.0 * this->n / this->d;
	second = 1.0 * r1.n / r1.d;
	if (first == second)
		return true;
	else
		return false;
}

bool Rational::operator!=(Rational r1)
{
	double first, second;
	first = 1.0 * this->n / this->d;
	second = 1.0 * r1.n / r1.d;
	if (first != second)
		return true;
	else
		return false;
}

Rational Rational::operator+(Rational r1)
{
	return this->add(r1);
}

Rational Rational::operator-(Rational r1)
{
	return this->substract(r1);
}

Rational Rational::operator*(Rational r1)
{
	return this->multiply(r1);
}

Rational Rational::operator/(Rational r1)
{
	return this->divide(r1);
}

int Rational::operator[](int index)
{
	if (index == 0)
		return n;
	else if(index == 1)
		return d;
}

Rational Rational::operator+=(Rational &r1)
{
	*this = this->add(r1);
	return *this;
}

Rational Rational::operator-=(Rational &r1)
{
	*this = this->substract(r1);
	return *this;
}

Rational Rational::operator*=(Rational &r1)
{
	*this = this->multiply(r1);
	return *this;
}

Rational Rational::operator/=(Rational &r1)
{
	*this = this->divide(r1);
	return *this;
}

Rational &Rational::operator++()
{
	n += d;
	return *this;
}

Rational & Rational::operator--()
{
	n -= d;
	return *this;
}

Rational Rational::operator+()
{
	return Rational(n, d);
}

Rational Rational::operator-()
{
	return Rational(-n, d);
}

ostream & operator<<(ostream & out, Rational &r1)
{
	int gcd = Rational::gcd(r1.n, r1.d);
	out << r1.n / gcd << "/" << r1.d / gcd;
	return out;
}

istream & operator>>(istream & in, Rational &r1)
{
	in >> r1.n >> r1.d;
	return in;
}
