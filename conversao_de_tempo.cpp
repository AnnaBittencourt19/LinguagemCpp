//entrada = tempo em segundo 
// calculo = conversão para minutos e hora
// saida = h:m:s

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, segundos, minutos, horas;
	
	cin >> N;
	
	horas = N / 3600; // segundos ==> horas = segundos /3600
	minutos = (N % 3600) / 60; // oq resta na hora é minutos
	segundos = N % 60; // o resto é segundos
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;
}