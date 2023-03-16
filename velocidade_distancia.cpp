// entrada = V0, S0, A, T 
//calculo = V =V0 + A * T e S = S0 + V0 * t + 1/2 * A *T*
// saida = V e S
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int V0, S0, A, T, V, S;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o valor da velocidade inicial: " << endl;
	cin >> V0;
	
	cout << "Digite o valor da posição inicial: " <<endl;
	cin >> S0;
	
	cout << "Digite o valor da aceleração: " << endl;
	cin >> A;
	
	cout << "Digite o tempo percorrido: " << endl;
	cin >> T;
	
	cout << "-----------------------------------------------" <<endl;
	
	V = V0 + A * T;
	cout << "A velocidade final é: " << V << endl;
 	
 	S = S0 + V0 * T +  (A * pow(T,2))/2;
 	cout << "A posição final é: " << S << endl;
	return 0;
}