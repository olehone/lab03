// Lab_03_3.cpp
// Володько Олег
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 3
#include <iostream>
#include <cmath>
#include <math.h>
#include <corecrt_math_defines.h>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(R * R - (x + 7) * (x + 7));
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = -x * R / 4;
				else
					if (0 < x && x <= M_PI)
						y = sin(x);
					else
						y = x - M_PI;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}