#include <iostream>
using namespace std;

int main()
{
	float produto1, produto2, produto3, produto4, produto5, soma, pagamento, troco;
	
	cout << "digite o valor do primeiro produto: ";
	cin >> produto1;
	
	cout << "digite o valor do segundo produto: ";
	cin >> produto2;
	
	cout << "digite o valor do terceiro produto: ";
	cin >> produto3;
	
	cout << "digite o valor do quarto produto: ";
	cin >> produto4;
	
	cout << "digite o valor do quinto produto: ";
	cin >> produto5;
	
	soma = produto1 + produto2 + produto3 + produto4 + produto5;
	
	cout << "digite o valor pago: ";
	cin >> pagamento;
	
	troco = pagamento - soma;
	if (troco >= 0) {
		cout << "o valor total dos produtos eh: R$ " << soma << endl;
		cout << "o valor pgo foi: R$ " << pagamento << endl;
		cout << "o troco a ser devolvido eh: R$ " << troco << endl;

	} else {
		cout << "valor insuficiente para o pagamento!" << endl;
		
	}
		
	
	return 0;
}