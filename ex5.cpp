#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int valor1;
	int valor2;
	int valor3;
	int valor4;
	int media;
	
	cout << "digite o primeiro valor: ";
	cin >> valor1;
	
	cout << "digite o segundo valor: ";
	cin >> valor2;
	
	cout << "digite o terceiro valor: ";
	cin >> valor3;
	
	cout << "digite o quarto valor: ";
	cin >> valor4;
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
    
    cout << "a media aritmetica eh: " << media << endl;
    
	return 0;
}