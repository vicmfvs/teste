#include <iostream>
using namespace std;

int main()
{
	int cotacaoDolar;
	int quantidadeDolares;
	int valorReais;
	
	cout << "digite a cotacao de Dolar: ";
	cin >> cotacaoDolar;
	
	cout << "digite a quantidade de dolares: ";
	cin >> quantidadeDolares;
	
	valorReais = cotacaoDolar * quantidadeDolares;
	
	cout << "o valor de " << quantidadeDolares << " dolares eh R$ " << valorReais << endl;
	
	return 0;
}