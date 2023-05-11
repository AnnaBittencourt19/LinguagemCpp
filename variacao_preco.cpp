//entrada = preco_atual(double), quantidade_mes
// calculo/ condi��o = se quantidade_mes == 0 (preco_atual - preco_atual*0.10) - diminui preco
// se 0 < quantidade_mes < 500 (preco_atual) - sem reajuste
//se 500 =< quantidade_mes < 1000 (preco_atual + preco_atual*0.10) - aumentou o preco
//se quantidade_mes >= 1000 (preco_atual + preco_atual*0.15) - aumentou o preco
//saida = novo_preco
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double preco_atual, novo_preco;
	int quantidade_mes;
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	
	cout << "Digite o pre�o atual: " << endl;
	cin >> preco_atual;
	
	cout << "Digite a quantidade vendida/m�s: " <<endl;
	cin >> quantidade_mes;
	
	if(quantidade_mes == 0 && preco_atual >0){
		novo_preco = preco_atual - preco_atual*0.10;
		cout << "R$ " << novo_preco << " -diminui o pre�o" <<endl;
	}
	
	if(quantidade_mes >0 && quantidade_mes < 500 && preco_atual >0){
		novo_preco = preco_atual;
		cout << "R$ " << novo_preco << " -sem reajuste" <<endl;
	}
	if(quantidade_mes>= 500 && quantidade_mes < 1000 && preco_atual >0){
		novo_preco = preco_atual + preco_atual*0.10;
		cout << "R$ " << novo_preco << " -aumentou o pre�o" <<endl;
	}
	if(quantidade_mes >= 1000 && preco_atual >0){
		novo_preco = preco_atual + preco_atual*0.15;
		cout << "R$ " << novo_preco << " -aumentou o pre�o" <<endl;
	}
	if(preco_atual < 0 || quantidade_mes <0) {
		cout << "Erro de entrada" <<endl;
	}
	return 0;
}