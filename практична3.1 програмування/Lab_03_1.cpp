// Lab_03_1.cpp
// Чернієнко Максим
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 25

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
	
	double x;
	double y1;
	double y2;
	double A;
	double B;
	cout << "x = "; cin >> x;
	A = 8.1 + pow(x, 3);
// спосіб 1: розгалуження в скороченій формі
	if (x <  - 3.5)
		B = 1 - pow(x, -5);
	if (-3.5 <= x && x < 1)
		B = 1/tan(abs(x + 1));
	if (x >= 1)
		B = atan((2 * x) - log10(x / 2));
	y1 = A + B;
	cout << "y1 = " << y1;


}