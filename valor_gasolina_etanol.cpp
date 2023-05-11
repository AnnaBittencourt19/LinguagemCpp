//entrada = preco_gasolina, preco_etanol, litros_gasolina, litros_etanol
//calculo = 
// saida = novo_gasolina, novo_etanol
//if
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	double preco_gasolina, preco_etanol, litros_gasolina, litros_etanol, novo_gasolina, novo_etanol, p;
	
	cout << "Digite o valor atual da gasolina: " <<endl;
	cin >> preco_gasolina;
	
	cout << "Digite o valor atual do etanol: " <<endl;
	cin >> preco_etanol;
	
	cout << "Digite a quantidade de litros de gasolina: " <<endl;
	cin >> litros_gasolina;
	
	cout << "Digite a quantidade de litros de etanol: " <<endl;
	cin >> litros_etanol;
	
	cout << "---------------------------------------" << endl;
	
	p = litros_gasolina/litros_etanol;
	
	if (p >2){
		novo_gasolina = preco_gasolina + (preco_gasolina*0.20);
		cout << "Novo preço da gasolina: " << novo_gasolina << endl;
		
		novo_etanol = preco_etanol - (preco_etanol * 0.10);
		cout << "Novo preço do etanol: " << novo_etanol << endl; 
	}
	if (p==2){
		novo_gasolina = preco_gasolina + (preco_gasolina*0.10);
		cout << "Novo preço da gasolina: " << novo_gasolina << endl;
		
		novo_etanol = preco_etanol - (preco_etanol * 0.10);
		cout << "Novo preço do etanol: " << novo_etanol << endl; 	
	}
	if(p < 2){
		novo_gasolina = preco_gasolina - (preco_gasolina*0.10);
		cout << "Novo preço da gasolina: " << novo_gasolina << endl;
		
		novo_etanol = preco_etanol + (preco_etanol * 0.20);
		cout << "Novo preço do etanol: " << novo_etanol << endl; 	
	}
	
	
	
	return 0;
}