
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	string name;
	cout << "Введите свое имя:" << endl;
	cin >> name; 
	cout << "Приветствую !," << name << '\n';
	return 0;
}