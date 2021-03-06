#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
struct book {
	int date;
	int str;
	string name;
	string avtor;
};
struct student {
	string name;
	int date;
	float bal;
};
struct car {
	int date;
	int cash;
	string marka;
	string model;
};
struct graph {
	int x;
	int y;
};
struct vet {
	graph l1;
	graph l2;
};
struct biblio{
	int year;
	string name;
	int kol;
	book books[100];
};

int main() {
	int a;
	book b1;
	car c1;
	vet t1;
	student st[50];
	biblio bib;
	setlocale(0, "rus");
	cout << "Выберите вариант: " << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Имя автора: " << endl;
		cin.get();
		getline(cin, b1.avtor);
		cout << "Название книги: " << endl;
		getline(cin, b1.name);
		cout << "Год: " << endl;
		cin >> b1.date;
		cout << "Количество страниц: " << endl;
		cin >> b1.str;
		cout << b1.name << " " << b1.avtor << " " << b1.date << " " << b1.str;
		break;
	case 2:
		cout << "Введите количество студентов: " << endl;
		cin >> a;
		for (int i = 0; i < a; i++) {
			cout << "Имя: " << endl;
			cin.get();
			getline(cin, st[i].name);
			cout << "Год рождения: " << endl;
			cin >> st[i].date;
			cout << "Средний балл: " << endl;
			cin >> st[i].bal;
			cout << st[i].name << " " << st[i].date << " " << st[i].bal << endl;
		}
		break;
	case 3:
		cout << "Марка авто: " << endl;
		cin.get();
		getline(cin, c1.marka);
		cout << "Модель: " << endl;
		getline(cin, c1.model);
		cout << "Год выпуска: " << endl;
		cin >> c1.date;
		cout << "Цена: " << endl;
		cin >> c1.cash;
		cout << c1.marka << " " << c1.model << " " << c1.date << " " << c1.cash << "$";
		break;
	case 4:
		cout << "Координаты первой точки: " << endl;
		cin >> t1.l1.x;
		cin >> t1.l1.y;
		cout << "Координаты второй точки: " << endl;
		cin >> t1.l2.x;
		cin >> t1.l2.y;
		cout << "(" << t1.l1.x << "," << t1.l1.y << ") (" << t1.l2.x << "," << t1.l2.y << ")" << endl;
		break;
	case 5:
		cout << "Название библиотеки: " << endl;
		cin.get();
		getline(cin, bib.name);
		cout << "Год основания: " << endl;
		cin >> bib.year;
		cout << "Кол-во книг: " << endl;
		cin >> bib.kol;
		for (int i = 0; i < bib.kol; i++) {
			cout << "Имя автора: " << endl;
			cin.get();
			getline(cin, bib.books[i].avtor);
			cout << "Название книги: " << endl;
			getline(cin, bib.books[i].name);
			cout << "Год: " << endl;
			cin >> bib.books[i].date;
			cout << "Количество страниц: " << endl;
			cin >> bib.books[i].str;
			cout << bib.books[i].name << " " << bib.books[i].avtor;
			cout << " " << bib.books[i].date << " " << bib.books[i].str << endl;
		}
		break;
	}
}