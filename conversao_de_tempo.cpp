//entrada = tempo em segundo 
// calculo = convers�o para minutos e hora
// saida = h:m:s

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, segundos, minutos, horas;
	
	cin >> N;
	
	horas = N / 3600; // segundos ==> horas = segundos /3600
	minutos = (N % 3600) / 60; // oq resta na hora � minutos
	segundos = N % 60; // o resto � segundos
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;
}