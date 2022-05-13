#include "Number.h"
#include "String.h"

using namespace std;

Number::Number()
{
	number1 = 0;
	number2 = 0;
}
Number::Number(double number1, double number2)
{
	this->number1 = number1;
	this->number2 = number2;
}
Number::Number(const Number&x)
{
	this->number1 = x.number1;
	this->number2 = x.number2;
}
Number::~Number()
{}

Number& Number::operator=	(const Number& x)
{
	this->number1 = x.number1;
	this->number2 = x.number2;
	return *this;
}
Number::operator string() const
{
	stringstream ss;
	ss << number1 << " " << number2;
	return ss.str();
}
Number operator -(const Number& x, const Number& y)
{
	return Number(x.number1 - y.number1, x.number2 - y.number2);
}
Number operator *(const Number& x, const Number& y)
{
	return Number(x.number1 * y.number1, x.number2 * y.number2);
}
ostream& operator << (ostream& out, const Number& x)
{
	out << x.number1 << " " << x.number2;
	return out;
}
istream& operator >> (istream& in, Number& x)
{
	cout << "Enter first number: ";cin >> x.number1;
	cout << "Enter second number: ";cin >> x.number2;
	return in;
}
Number& Number::operator ++()
{
	number1++;
	number2++;
	return *this;
}
Number& Number::operator --()
{
	number1--;
	number2--;
	return *this;
}
Number Number::operator ++(int)
{
	Number t(*this);
	number1++;
	number2++;
	return t;
}
Number Number::operator --(int)
{
	Number t(*this);
	number1--;
	number2--;
	return t;
}
