#pragma once
#include "Number.h"
using namespace std;
class Real
{
private:
	Number num;
public:
	Real();
	Real(Number);
	Real(const Real&);
	~Real();

	Number getNum() { return num; }
	
	void setNum(Number num) { this->num = num; }

	Real& operator=(const Real&);
	operator string();

	friend ostream& operator<<(ostream&, Real&);
	friend istream& operator>>(istream&, Real&);
	
	double Square(int step, Number& f);
	double Step(int step);
};

