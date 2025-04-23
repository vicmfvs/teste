#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
	int diametro;
	int raio;
	int area;
	
	cout << "digite o diametro do circulo: ";
	cin >> diametro;
	
	raio = diametro / 2;
	
	area = M_PI * pow(raio,2);
	
	cout << "a area do circulo eh: " << area << endl;
	
		return 0;
}