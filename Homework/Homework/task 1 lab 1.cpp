#include <iostream>
#include <cmath>
using namespace std;
void main()
{//Руссификация
	setlocale(LC_ALL, "rus");
	//Объявление констант
	const double a = 2.5, x = 3.11;
	//Объявление переменной
	double Y, Z;
	//Вычисление по формуле
	Y = log(1.5 * x) + pow(a, 4); 
	Z = atan(cos(a / pow(x, 2))); 
	//Печать результата с 5 знаками после точки
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);
	//Печать значений переменных
	cout << "\na=" << a << " x=" << x << " Y=" << Y << " Z=" << Z << endl;
}