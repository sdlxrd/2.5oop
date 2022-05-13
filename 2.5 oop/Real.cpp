#include "Real.h"
#include "Number.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

#define PI 3.14159265358979323846	

using namespace std;

Real::Real()
{
	step = 0;
	num;
}
Real::Real(double step, Number num)
{
	this->step = step;
	this->num = num;
}
Real::Real(const Real& x)
{
	this-> step = x.step;
	this-> num = x.num;
}
Real::~Real()
{}	
Real& Real::operator=(const Real& x)
{
	step = x.step;
	num = x.num;
	return *this;
}
Real::operator string()const
{
	stringstream s;
	s << "square of = " << step << " degree of  " << num.getNumber() << " = " << Square(step) << endl;
	s << step << "step of Pi = " << Step(step) << endl;
	s << num.getNumber() << " - " << num.getNumber2() << " = " << num.getNumber() - num.getNumber2() << endl;
	s << num.getNumber() << " * " << num.getNumber2() << " = " << num.getNumber() * num.getNumber2() << endl;
	return s.str();
}
ostream& operator<<(ostream& out, const Real& x)
{
	out << string(x);

	return out;
}
istream& operator>>(istream& in, Real& x)
{
	cout << "Enter step: ";in >> x.step;
	cout << "Enter number: ";in >> x.num;
	cout << endl;
	return in;
}

Real& Real::operator ++()
{
	step++;
	return *this;
}
Real Real::operator ++(int)
{
	Real x = *this;
	step++;
	return x;
}
Real& Real::operator --()
{
	step--;
	return *this;
}
Real Real::operator --(int)
{
	Real x = *this;
	step--;
	return x;
}
	
double Real::Square(int step)
{
	return pow(num.getNumber(), (1. / step));
}
double Real::Step(int step)
{
	return pow(PI, step);
}