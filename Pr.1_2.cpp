#include "pch.h"
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b;
	int a1, b1;
	cout << "1 - дробные, 2 -целые" << endl;
	int number;
	cin >> number;
	cout << "Вводите числа: " << endl;
	switch (number) 
	{
	case 1:
		cin >> a >> b;
		cout << "Сложение: " << (a + b) << endl;
		cout << "Умножение: " << (a*b) << endl;
		break;

	case 2:
		cin >> a1 >> b1;
		cout << "Сложение: " << (a1 + b1) << endl;
		cout << "Умножение: " << (a1*b1) << endl;
		break;
	}
	return 0;
}