#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, x, y, t;
	a = 3.5;
	x = -0.7;
	if (a <= x)
		y = a + log(x + a);
	else
		y = sqrt(sin(a*x));
	if (a > y)
		t = y / (a - x);
	else if (a == y)
		t = y / (a - x) + (a + x) / pow(y, 2);
	else
		t = tan(a*x) + cos(2 * a*y);
	if (sin(a*x) < 0) {
		cout << "error" << endl;
		cout << "a=" << a << endl << "x=" << x << endl;
	}
	else {
		cout << " a = " << a << '\n' << " x = " << x << '\n' << " y = " << y << '\n' << " t = " << t << '\n';
	}
	system("pause");
	return 0;
}