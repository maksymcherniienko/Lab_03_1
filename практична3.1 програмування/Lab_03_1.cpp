// Lab_03_1.cpp
// Чернієнко Максим
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 27

#include<iostream>
#include<cmath>

using namespace std;
const double E = 2.71828;

int main()
{
	
	double x;
	double y1;
	double y2;
	cout << "x = "; cin >> x;
// спосіб 1: розгалуження в скороченій формі
		if (x < 4)
			y1 = abs(9 * pow(x, 3) + 2) + 3 * pow(x, 5) - pow(x, 3) + 2 * x - 1;
		if (4 <= x < 7)
			y1 = abs(9 * pow(x, 3) + 2) + atan((x - 2) / 3);
		if (x >= 7)
			y1 = abs(9 * pow(x, 3) + 2) + log10(2 * pow(x, -1) + pow(E, 3 * x + 1));

// спосіб 2: розгалуження в повній формі
		if (x >= 7)
			y2 = abs(9 * pow(x, 3) + 2) + log10(2 * pow(x, -1) + pow(E, 3 * x + 1));
		else
			if (4 <= x < 7)
				y2 = abs(9 * pow(x, 3) + 2) + atan((x - 2) / 3);
			else
				y2 = abs(9 * pow(x, 3) + 2) + 3 * pow(x, 5) - pow(x, 3) + 2 * x - 1;
	
	 

	cout << "y1 = " << y1 << endl;
	cout << "y2 = " << y2 << endl;
}