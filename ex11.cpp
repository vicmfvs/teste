#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y, resultado;
	
	cout << "digite o valor de x: ";
	cin >> x;
	
	cout << "digite o valor de y: ";
	cin >> y;
	
	resultado = pow(x, y);
	
	cout << x << " elevado a " << y << " eh: " << resultado << endl;
	
		return 0;
}