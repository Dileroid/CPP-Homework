#include <iostream>
#include <cmath>
using namespace std;
void main()
{ //Руссификация
	setlocale(LC_ALL, "rus");
	double x, y;
	//Объявление переменных
	double U;
	//Ввод x
	cout << "\n Ввести x=";
	cin >> x;
	//Ввод y
	cout << "\n Ввести y=";
	cin >> y;
	//Вычисления
	if (pow(x,2) * y < 0) U = tan(x);
	else if (pow(x,2)*y > 0 && pow(x, 2) * y < 5) U = 1 / tan(x) + pow(x, 1. / 3);
	else U = abs(x-y);
	//Вывод результата с 7 знаками после точки
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(7);
	//Вывод результата
	cout << "\n y=" << y << " x=" << x << " U=" << U;
	cout << endl;
}
