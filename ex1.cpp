#include <iostream>
using namespace std;

int main()
{
	int base;
	int altura;
	int area;
	
	cout << "informe a base do retangulo: ";
	cin >> base;
	
	cout << "informe a altura do retangulo: ";
	cin >> altura;
	
	area = base * altura;
	
	cout << "A area do retangulo eh " << area << endl;
	
	return 0;
}