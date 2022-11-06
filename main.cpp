#include <iostream>
using namespace std;


int main()
{
	
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
	
	
	
	
	
	

	
	
	
	
	
	
	return 0;
}
