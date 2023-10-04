// Lab_03_1.cpp
// Чернієнко Максим
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 25

#include<iostream>
#include<cmath>

using namespace std;
const double E = 2.71828;

int main()
{
	
	double x;
	double y1;
	double y2;
	double A;
	cout << "x = "; cin >> x;
	A = 8.1 + pow(x, 3);
// спосіб 1: розгалуження в скороченій формі
	if (x < (-3.5))
		y1 = A + 1 - pow(x, -5);
	if ((-3.5) <= x < 1)
		y1 = A + cos(abs(x + 1))/sin(abs(x + 1));
	if (x >= 1)
		y1 = A + atan(2 * x) - log10(x / 2);

		cout << "y1 = " << y1 << endl;
// спосіб 2: розгалуження в повній формі
		if (x >= 1)
			y2 = A + atan(2 * x) - log10(x / 2);
		else
			if ((-3.5) <= x < 1)
				y2 = A + cos(abs(x + 1)) / sin(abs(x + 1));
			else
				y2 = A + 1 - pow(x, -5);
		cout << "y2 = " << y2 << endl;
}