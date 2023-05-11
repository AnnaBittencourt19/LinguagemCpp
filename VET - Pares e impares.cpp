//Faça um programa em C++ que leia um vetor de números inteiros de tamanho 5 e exiba a quantidade de valores pares e a quantidade de valores ímpares contidos nesse vetor.

#include <iostream>

using namespace std;

int main()
{
	int vetor[5], par=0, impar=0;
	
	for (int i = 0; i < 5; i++){
		cin >> vetor[i];
	}
	for (int i = 0; i < 5; i++){
		if (vetor[i] % 2 == 0){
			par++;
		}
		else
		{
			impar++;
		}
	}	
	cout << "Pares: "<< par << " Impares: " << impar;
	
	return 0;
}
