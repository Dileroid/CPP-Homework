#include <iostream>
#include <cmath>
using namespace std;
void main()
{ //������������
	setlocale(LC_ALL, "rus");
	double x, y;
	//���������� ����������
	double U;
	//���� x
	cout << "\n ������ x=";
	cin >> x;
	//���� y
	cout << "\n ������ y=";
	cin >> y;
	//����������
	if (pow(x,2) * y < 0) U = tan(x);
	else if (pow(x,2)*y > 0 && pow(x, 2) * y < 5) U = 1 / tan(x) + pow(x, 1. / 3);
	else U = abs(x-y);
	//����� ���������� � 7 ������� ����� �����
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(7);
	//����� ����������
	cout << "\n y=" << y << " x=" << x << " U=" << U;
	cout << endl;
}
