#include <iostream>
using namespace std;

int main()
{
	int milhas;
	int quilometros;
	
	cout << "digite a quantidade de milhas maritima: ";
	cin >> milhas;
	
	quilometros = milhas * 1852 / 1000;
	
	cout << milhas << " milhas maritimas equivalem a: " << quilometros << "quilometros." << endl;
	return 0;
}
