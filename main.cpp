#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	
	double Ax, Bx, C, delta, x0, x1, x2;
	
	cout << "Podaj ax^2: " << endl;
	cin >> Ax;

	while (Ax == 0)
	{
		cout << "Ax^2 nie moze byc zerem. Podaj a rozne od zera: " <<endl;
		cin >> Ax;
	}
	
	
	cout << "Podaj bx: " << endl;
	cin >> Bx;

	cout << "Podaj c: " << endl;
	cin >> C;

	delta = (Bx * Bx) - 4 * Ax * C;

	if(delta > 0)
	{
		x1 = (-Bx - sqrt(delta))/ 2 * Ax;
		x2 = (-Bx + sqrt(delta))/ 2 * Ax;

		cout << "Miejsca zerowe funkcji kwadratowe to x1: " << x1 << " i x2: " << x2 << endl;
	}
	else if (delta == 0)
	{
		x0 = -Bx/ (2 * Ax);

		cout << "Miejsce zerowe funkcji kwadratowej to x0: " << x0 << endl;
	}
	else if (delta < 0)
	{
		cout << "Brak miejsc zerowych funkcji kwadratowej." << endl;
	}
	
	
	
	
	
	

	
	
	
	
	
	
	return 0;
}
