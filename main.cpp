#include <iostream>
using namespace std;


int main()
{
	
	double a, b;
	
	cout << "Podaj a" << endl;
	cin >> a;
	
	cout << "Podaj b" << endl;
	cin >> b;
	
	
	
	if(a == 0 && b != 0)
	{
		cout << "Funkcja nie ma miejsc zerowych." << endl;	
	}
	else if(a == 0 && b == 0)
	{
		cout << "Funkcja ma nieskoñczenie miejsc zerowych" << endl;	
	}
	else if(a != 0)
	{
		cout << "Miejsce zerowe funkcji liniowej wynosi: " << (-b/a) << endl;
	
	}
	
	
	
	
	
	

	
	
	
	
	
	
	return 0;
}
