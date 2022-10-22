#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//Series1.Даны десять вещественных чисел.Найти их сумму
	/*double x, summa = 0;
	int i = 1;
	while (i <= 10) {
		cin >> x;
		summa += x;
		i++;
	}
	cout << summa;*/
	//Series2.Даны десять вещественных чисел.Найти их произведение.
	/*double x, prois = 1;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		prois *= x;
	}
	cout << prois;*/
	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
	/*double x, sr = 1; // sr - среднее арифмитическое.
	int i = 1;
	while (i <= 10) {
		cin >> x;
		sr += x;
		i++;
	}
	sr = sr / 10;
	cout << sr;*/
	//Series4. Дано целое число N и набор из N вещественных чисел.
	//Вывести cумму и произведение чисел из данного набора.
	int summa = 0, prois = 1, x;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		summa += x;
		prois *= x;
	}
	cout << "summa - " << summa << endl << "proizvedenie - " << prois << endl;
	
}