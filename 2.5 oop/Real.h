#pragma once
#include "Number.h"
using namespace std;
class Real
{
private:
	double step;
	Number num;
public:
	Real();
	Real(double, Number);
	Real(const Real&);
	~Real();

	double getStep()  const { return step; }
	Number getNum()	const { return num; }

	void setStep(double step) { this->step = step; }
	void setNum(Number num) { this->num = num; }

	Real& operator=(const Real&);
	operator string() const;

	friend ostream& operator<<(ostream&, const Real&);
	friend istream& operator>>(istream&, Real&);

	Real& operator ++();
	Real& operator --();
	Real operator ++(int);
	Real operator --(int);
	
	double Square(int step);
	double Step(int step);
};

