//entrada = numero 
// if = numero > 0 && numero <= 25    (intervalo [0,25] )      numero > 25 && numero < 50 (intervalo (25,50]);
// saida = qual intervalo
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double numero;
	cout <<fixed << setprecision(2);
	cin >> numero;
	
	
	if(numero >= 0 && numero <= 25){
		cout << "Intervalo [0,25]" << endl; 
	}
	else if(numero > 25 && numero <= 50) {
		cout << "Intervalo (25,50]" << endl;
	}
	else if(numero > 75 && numero <= 100) {
		cout << "Intervalo (75,100]" << endl;
	}
	else {
		cout << "Fora de intervalo" << endl;
	}
	
	return 0;
}