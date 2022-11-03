#include <iostream>
using namespace std;


int main()
{
	
	double a, b;
	
	cout << "Podaj a" << endl;
	
	cin >> a;
	
	while(a == 0)
	{
		cout << "A nie moze byæ zerem: " << endl;
		cout << "Podaj a jeszcze raz: " << endl;
		cin >> a; 
	}
	
	
	cout << "Podaj b" << endl;
	cin >> b;
	
	
	
	cout << "Miejsce zerowe funkcji liniowej wynosi: " << (-b/a) << endl;
	
	

	
	
	
	
	
	
	return 0;
}
