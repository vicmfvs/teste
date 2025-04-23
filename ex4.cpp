#include <iostream>
using namespace std;
int main ()
{
	int base;
	int altura;
	int area;
	
	cout << "informe a base do triangulo: ";
	cin >> base;
	
	cout << "informe a altura ddo triangulo: ";
	cin >> altura;
	
	area = (base * altura) / 2;
	
	cout << "a area do triangulo eh " << area << endl;
	
	return 0;
}