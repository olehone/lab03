// Lab_03_4.cpp
// �������� ����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 3
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // �����
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (y>=-R&&y<=R&&x<=R&&x>=-R&&(x+R)*(x+R)+(y-R)*(y-R)>=R*R&&(x-R)*(x-R)+(y+R)*(y+R)>=R*R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}