/ Персональный шаблон проекта C++
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct date {
	int day{};
	int month{};
	int year{};
};
struct person {
	string name;
	date birthday;
	int salary = 0;
};
void show_person(person& P) {
	cout << "Имя: " << P.name << '\n';
	cout << "Дата рождения: " <<
		P.birthday.day << '.' <<
		P.birthday.month << '.' <<
		P.birthday.year << '\n';
	cout << "Зарплата: " << P.salary << '\n';
}
person input_person() {
	person tmp;
	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, tmp.name);
	cout << "Введите дату рождения: ";
	cin >> tmp.birthday.day >>
		tmp.birthday.month >>
		tmp.birthday.year;
	cout << "Введите зарплату: ";
	cin >> tmp.salary;
	return tmp;
}
void fill_person(person& P) {
	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, P.name);
	cout << "Введите дату рождения: ";
	cin >> P.birthday.day >>
		P.birthday.month >>
		P.birthday.year;
	cout << "Введите зарплату: ";
	cin >> P.salary;
}

struct persona {
	string name;
	int age = 0;
	int coins[5]{};
};
void show_persona(persona& P) {
	cout << "Имя:     " << P.name << '\n';
	cout << "Возраст: " << P.age << '\n';
	cout << "Монеты:  ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ' ';
	cout << '\n';
}
inline int year_of_birth(persona& P, int year) {
	return year - P.age;
}
int cash(persona& P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}

struct point {
	double X = 0;
	double Y = 0;
};
int compare_distance(point& P1, point& P2) {
	double dist1 = sqrt(pow(0 - P1.X, 2) +
		pow(0 - P1.Y, 2));
	double dist2 = sqrt(pow(0 - P2.X, 2) +
		pow(0 - P2.Y, 2));
	if (dist1 > dist2)
		return 1;
	if (dist1 < dist2)
		return -1;
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Просто структура person
	/*struct person { // объявление структуры person. Для её реализации создаются объекты p1 и p2
		string name = "noname";
		int age = 18;
		string position = "programer";
		int salary = 60000;
	} p1, p2{ "Bob Thomas", 40, "director", 120000 };

	// Обращение к полям объекта структуры
	p1.name = "Tom Smith";
	p1.age = 22;
	// p1.position = "manager";
	p1.salary = 50000;

	cout << "Имя: " << p1.name << '\n';
	cout << "Возраст: " << p1.age << '\n';
	cout << "Должность: " << p1.position << '\n';
	cout << "Зарплата: " << p1.salary << '\n';

	cout << "----------------------------------\n";

	cout << "Имя: " << p2.name << '\n';
	cout << "Возраст: " << p2.age << '\n';
	cout << "Должность: " << p2.position << '\n';
	cout << "Зарплата: " << p2.salary << '\n';

	// Измение всего содержимого объекта структуры
	p2 = { "Adam Thomas", 41, "president", 500000 };

	// Прямое присваивание полям объекта p2 значений из полей объекта p1
	p2 = p1;

	// Альтернативный способ создания объекта структуры
	person p3{ "Jake Home", 30, "policeman", 45000 };

	cout << "----------------------------------\n";

	cout << "Имя: " << p3.name << '\n';
	cout << "Возраст: " << p3.age << '\n';
	cout << "Должность: " << p3.position << '\n';
	cout << "Зарплата: " << p3.salary << '\n';*/

	// Структуры person и date
	/*person p4;
	p4.name = "Tom Smith";
	// p4.birthday.day = 1;
	// p4.birthday.month = 1;
	// p4.birthday.year = 1970;
	p4.birthday = { 1, 1, 1970 };
	p4.salary = 50000;

	person p5{
		"Bob Thomas",		// name
		{ 5, 10, 2000 },	// birthday (day, month, year)
		20000				// salary
	};

	person *pp5 = &p5;

	cout << "Имя: " << pp5->name << '\n';
	cout << "Дата рождения: " <<
		pp5->birthday.day << '.' <<
		pp5->birthday.month << '.' <<
		pp5->birthday.year << '\n';
	cout << "Зарплата: " << pp5->salary << '\n';

	cout << "----------------------------------\n";
	show_person(p4);

	// person p6 = input_person();
	person p6;
	fill_person(p6);
	cout << "----------------------------------\n";
	show_person(p6);*/

	// Задача 1. Персона с монетами
	/*cout << "Задача 1.\nОбъект:\n";
	persona A {
		"Nick Jackobs",		// name
		20,					// age
		{ 1, 2, 2, 5, 1 }	// coins
	};
	show_persona(A);
	cout << "Год рождения: " << year_of_birth(A, 2022) << '\n';
	cout << "Общие сбережения: " << cash(A) << '\n';*/

	// Задача 2. Координаты
	cout << "Задача 2.\nТочка A: ";
	point A{ 4.5, -1.3 };
	cout << A.X << ", " << A.Y << '\n';
	point B{ 6.1, 0.9 };
	cout << "Точка B: " << B.X << ", " << B.Y << '\n';
	cout << compare_distance(A, B) << '\n';

	return 0;
}