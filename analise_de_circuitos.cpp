//entrada = v, r1, r2, r3
// calculo = i = v * (1/r1 + 1/r2 + 1/r3) e 1/r = 1/r1 + 1/r2 + 1/r3
// saida = i  e r
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double v, r1, r2, r3, i, r= 1/r;
	
	cout << "Digite o valor da tensão: " << endl;
	cin >> v;
	
	cout << "Digite o valor dos resistores: " <<endl;
	cin >> r1 >> r2 >> r3; 
	cout << "------------------------------------------"<<endl;
	cout << fixed << setprecision(4);
	
	i = v * (1/r1 + 1/r2 + 1/r3);
	cout << "O valor da corrente total é: " << i<< endl;
	
	r = 1/(1/r1+1/r2+1/r3);
	cout << "O valor da resistência equivalente é: " << r <<endl;
	return 0;
}