#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class animals
{
protected:
	string name;
	float weight;
public:
	animals()
	{
		cout << "Animals: ";
	}
};
class cat :public animals
{
public:
	cat()
	{
		name = "Myr";
		weight = 3;
		cout << "Cat " << name << endl;
		cout << "Weight: " << weight << " kg\n" << endl;
	}
};
class parrot :public animals
{
public:
	parrot()
	{
		name = "Tishka";
		weight = 0.5;
		cout << "Parrot " << name << endl;
		cout << "Weight: " << weight << " kg\n" << endl;
	}
};
class dog :public animals
{
public:
	dog() {
		name = "John";
		weight = 13;
		cout << "Dog " << name << endl;
		cout << "Weight: " << weight << " kg\n" << endl;
	}
};
int main()
{
	dog sob;
	parrot pop;
	cat kot;
	_getch();
	return 0;
}