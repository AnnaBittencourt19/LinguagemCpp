//Faça um programa em C++ que leia um vetor de números reais de tamanho 5 e exiba a média aritmética desses valores.

#include <iostream>

using namespace std;

int main()
{
	int numeros[5], soma=0;
	float media=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> numeros[i];
		soma += numeros[i];
	}
	media = soma*1.0 / 5;

	cout << media;
	
	return 0;
}
