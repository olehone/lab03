// Lab_03_1.cpp
// �������� ����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 2/x + fabs(x);
	// ����� 1: ������������ � ��������� ����
	if (x < 0)
		B = 1 + 4*(x*x);
	if (0 <= x && x <= 2)
		B = (exp(x) + fabs(x)) * (exp(x) + fabs(x));
	if (x > 2)
		B = 5*sin(x*x + 1);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 0)
		B = 1 + 4 * (x * x);
	else
		if (x > 2)
			B = 5 * sin(x * x + 1);
		else
			B = (exp(x) + fabs(x)) * (exp(x) + fabs(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
