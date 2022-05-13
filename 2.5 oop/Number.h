#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Number
{
private:
	double number1;
	double number2;
public:
	void setNumber(double number) { this->number1 = number; }
	void setNumber2(double number) { this->number2 = number; }
	
	double getNumber() const { return this->number1; }
	double getNumber2()	const { return this->number2; }
	
	Number();
	Number(double, double);
	Number(const Number&);
	~Number();

	Number& operator=(const Number&);
	operator string() const;

	friend Number operator -(const Number&, const Number&);
	friend Number operator *(const Number&,	const Number&);

	friend ostream& operator <<(ostream&, const Number&);
	friend istream& operator >>(istream&, Number&);
	
	Number& operator ++();
	Number operator ++(int);
	Number& operator --();
	Number operator --(int);
		
};

