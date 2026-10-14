#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(65001);

	const double abonentka = 300.0;
	const int limit = 200;
	const int limit2 = 400;
	const double price1 = 2.0;
	const double price2 = 3.0;

	int minutes;
	cout << "введите кол-во минут за месяц: ";
	cin >> minutes;

	double pereplata = 0.0;
	double result = 0.0;
	string category;

	if (minutes <= limit) {
		pereplata = 0.0;
		result = abonentka;
		category = "низкая";
	}

	else if (minutes <= limit2) {
		int sverhlimita = minutes - limit;
		pereplata = sverhlimita * price1;
		result = abonentka + pereplata;
		category = "средняя";

	}

	else {
		int minutdo400 = limit2 - limit;
		int minutswerh400 = minutes - limit2;
		pereplata = minutdo400 * price1 + minutswerh400 * price2;
		result = abonentka + pereplata;
		category = "высокая";

	}

	cout << endl;
	cout << "----------------------------------" << endl;
	cout << "резултаты расчета: " << endl;
	cout << "----------------------------------" << endl;
	cout << "итоговая стоимость: " << result << " руб." << endl;
	cout << "переплата сверх абонентки: " << pereplata << " руб." << endl;
	cout << "категория использования: " << category << endl;

	return 0;



}