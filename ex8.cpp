#include <iostream>
using namespace std;

int main()
{
	int celsius;
	int fahrenheit;
	
	cout << "Digite a temperatur em graus celsius: ";
	cin >> celsius;
	
	fahrenheit = ( celsius * 9 / 5) + 32;
	
	cout << "a temperatura em fahrenheit eh: " << fahrenheit << " °F" << endl;
	
		return 0;
}