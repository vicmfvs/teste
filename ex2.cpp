#include <iostream>
using namespace std;

int main()
{
	int aresta;
	int area;
	
	cout << "informe a aresta do quadradro: ";
	cin >> aresta;
	
	area = aresta * aresta;
	
	cout << "A area do quadrado eh " << area << endl;
	return 0;
}