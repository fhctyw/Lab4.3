// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double xp, xk, dx, a, b, c;
	double F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "----------------------------------------------" << endl;
	cout << "|" << setw(7) << "a" << setw(8) << "b" << setw(8) << "c" << setw(8) << "x" 
		 << " |" << setw(10) << "y" << " |" << endl;
	cout << "----------------------------------------------" << endl;


	for (double x = xp; x <= xk; x+=dx)
	{
		if (x - 1 < 0 && b - x != 0)
			F = a * x * x + b;
		else
			if (x - 1 > 0 && b + x == 0)
				F = (x - a) / x;
			else
				F = x / c;

		cout << "|" << setw(7) << setprecision(2) << a << " " 
			<<setw(7) <<setprecision(2) << b << " "
			<<setw(7) << setprecision(2) << c << " " 
			<<setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(3) << F << " |" << endl;
	}
	cout << "----------------------------------------------" << endl;

	return 0;
}