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
	num;
}
Real::Real(Number num)
{
	this->num = num;
}
Real::Real(const Real& x)
{
	this-> num = x.num;
}
Real::~Real()
{}	
Real& Real::operator=(const Real& x)
{
	num = x.num;
	return *this;
}
Real::operator string()
{
	stringstream s;
	s << "";
	return s.str();
}
ostream& operator<<(ostream& out, Real& x)
{
	out << string(x);
	return out;
}
istream& operator>>(istream& in, Real& x)
{
	int step;
	cout << "Enter step: ";in >> step;
	cout << "Numbers: ";in >> x.num;
	cout << endl;
	return in;
}
	
double Real::Square(int step, Number& f)
{
	cout << "root of x = " << pow(f.getNumber(), (1. / step)) << endl;
	cout << "root of y = " << pow(f.getNumber2(), (1. / step)) << endl;

	return 0;
}
double Real::Step(int step)
{
	return pow(PI, step);
}