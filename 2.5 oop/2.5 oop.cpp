#include <iostream>
#include <sstream>
#include "Real.h"
#include "Number.h"

using namespace std;

int main()
{
	Real a;
	Number x, y;
	int n;
	cout << "x:" << endl;
	cin >> x;
	cout << "y:" << endl;
	cin >> y;
	
	cout << endl << "x1 * x2, y1 * y2: " << endl << x * y << endl;
	cout << endl << "x1 - x2, y1 - y2: " << endl << x - y << endl;
	cout << endl << "n = ";	cin >> n;
	cout <<endl <<  "first: " << endl;
	a.Square(n, x);
	cout << endl << "second: " << endl;
	a.Square(n, y);
	cout << "step = " << a.Step(n) << endl;

	cin.get();
	cin.get();

	system("cls");
	cout << "x++: " << x++;
	cout << endl << "res: " << x;
	cout << endl;
	cout << "++x: " << ++x;
	cout << endl;
	cout << "x--: " << x--;
	cout << endl << "res: " << x;
	cout << endl;
	cout << "--x: " << --x;

	return	0;
}