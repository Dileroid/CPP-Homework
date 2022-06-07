#include <iostream>
#include <cmath>
using namespace std;
void main()
{//������������
	setlocale(LC_ALL, "rus");
	//���������� ��������
	const double a = 2.5, x = 3.11;
	//���������� ����������
	double Y, Z;
	//���������� �� �������
	Y = log(1.5 * x) + pow(a, 4); 
	Z = atan(cos(a / pow(x, 2))); 
	//������ ���������� � 5 ������� ����� �����
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);
	//������ �������� ����������
	cout << "\na=" << a << " x=" << x << " Y=" << Y << " Z=" << Z << endl;
}