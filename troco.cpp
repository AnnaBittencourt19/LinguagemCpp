//entrada = dinheiro_total, valor_compra
// calculo = dinheiro_total - valor_compra
//saida = troco

#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	
	double dinheiro_total, valor_compra, troco;
	cout << fixed << setprecision(2);
	cout << "Digite a quantia em dinheiro: " <<endl;
	cin >> dinheiro_total;

	cout << "Digite o valor da compra: " <<endl;
	cin >> valor_compra;

	troco = dinheiro_total - valor_compra;
	cout << "TROCO = " << troco << endl;

return 0;
}