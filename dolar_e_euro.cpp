//entrada de dados = valor em real
//calculo: vlor em dolar = real/5.28 e valor em euro= real/5.37
//Saída de dados = mostrar os valores em dólar e em euro

#include <iostream>
#include <iomanip> //biblioteca para usar setprecision
using namespace std;

int main()
{
	double real, dolar, euro; //declaração de variaveis
	
	//entrada de dados
	cout << "Digite o valor em real: " <<endl; 
	cin >> real;
	
	//calculos
	dolar= real/5.60;
	euro= real/6.70;
	cout << fixed << setprecision(2); //fixa 2 casas decimais
	
	//saida de dados
	cout << "O valor em dolar eh: " <<dolar <<endl;
	cout <<"O valor em euro eh: " <<euro <<endl;
	
	return 0;
}