//entrade de dados: milhas/hora
//Calculo: kmh = mph * 1,609344
//Saida: valor em km/h

#include <iostream>
using namespace std;
int main()
{
	double Mph, Kmh;
	cout << "Digite o valor em milhas/hora:" <<endl;
	cin >> Mph;
	
	Kmh = Mph * 1.609344;
	 cout << "O valor em Km/hora eh:" << Kmh;
	 
	return 0;
}