#include <iostream>
#include <math.h>
using namespace std;


		
int main()
{
	
	
	int opcja;
	
	cout << "Wybierz co chcesz obliczyc: \n" << endl;
	cout << "1.Funkcja liniowa " << endl;
	cout << "2.Funkcja kwadratowa\n" << endl;
	
	cin >> opcja;
	
	switch(opcja)
	{
	case 1:
		
		double Ax, By, C;
		
		cout << "Podaj Ax" << endl;
		cin >> Ax;
		
		cout << "Podaj By" << endl;
		cin >> By;
	
		cout << "Podaj C" << endl;
		cin >> C;
	
	
		By = -By;
	
		Ax = Ax/By;
		C = C/By;
	
		By = By/By;
	
		double a, b;
	
		a = Ax;
		b = C;
		
		if(a == 0 && b != 0)
		{
			cout << "Funkcja nie ma miejsc zerowych." << endl;	
		}
		else if(a == 0 && b == 0)
		{
			cout << "Funkcja ma nieskonczenie miejsc zerowych" << endl;	
		}
		else if(a != 0)
		{
			cout << "Miejsce zerowe funkcji liniowej wynosi: " << (-b/a) << endl;
		
		}
		
		break;
				
	case 2:
		
		double Ax2, Bx, Ck, delta, x0, x1, x2;
	
			cout << "Podaj ax^2: " << endl;
			cin >> Ax2;
			
			cout << "Podaj bx: " << endl;
			cin >> Bx;
		
			cout << "Podaj c: " << endl;
			cin >> Ck;
		
			
		
			if(Ax2 == 0)
			{	
				cout << "Podana funkcja nie jest funkcja kwadratowa ale liniowa." << endl; 
				Bx = -Bx;
		
				Ax2 = Ax2/Bx;
				Ck = Ck/Bx;
		
				Bx = Bx/Bx;
		
				double a, b;
		
				a = Ax2;
				b = Ck;
		
		
				if(a == 0 && b != 0)
				{
					cout << "Funkcja nie ma miejsc zerowych." << endl;	
				}
				else if(a == 0 && b == 0)
				{
					cout << "Funkcja ma nieskonczenie miejsc zerowych" << endl;	
				}
				else if(a != 0)
				{
					cout << "Miejsce zerowe funkcji liniowej wynosi: " << (-b/a) << endl;
				
				}
		
			}else
			{		
				delta = (Bx * Bx) - 4 * Ax2 * Ck;
		
				if(delta > 0)
				{
					x1 = (-Bx - sqrt(delta))/ 2 * Ax2;
					x2 = (-Bx + sqrt(delta))/ 2 * Ax2;
		
					cout << "Miejsca zerowe funkcji kwadratowe to x1: " << x1 << " i x2: " << x2 << endl;
				}
				else if (delta == 0)
				{
					x0 = -Bx/ (2 * Ax2);
		
					cout << "Miejsce zerowe funkcji kwadratowej to x0: " << x0 << endl;
				}
				else if (delta < 0)
				{
					cout << "Brak miejsc zerowych funkcji kwadratowej." << endl;
				}
			
			}		
	
		break;
		
	
	}
	
	return 0;
}
