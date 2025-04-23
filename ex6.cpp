#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	int valor1;
	int valor2;
	int mediaGeometrica;
	
	cout << "digite o primeiro valor: ";
	cin >> valor1;
	
	cout << "digite o segundo valor: ";
	cin >> valor2;
	
	mediaGeometrica =sqrt(valor1 * valor2);
	
	cout << "A media geometrica eh: " << mediaGeometrica << endl;
	
	return 0;
}