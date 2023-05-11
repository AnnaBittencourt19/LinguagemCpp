//Faça um programa em C++ que leia um vetor de caracteres de tamanho 5 e exiba a quantidade de vogais contidas nesse vetor.

#include <iostream>

using namespace std;

int main()
{
	char letra[5];
	int vogal = 0;
	
	for (int i = 0; i < 5; i++){
		cin >> letra[i];
		if (letra[i] == 'A' || letra[i] == 'a' || letra[i] == 'E' || letra[i] == 'e' || letra[i] == 'I' || letra[i] == 'i' || letra[i] == 'O' || letra[i] == 'o' || letra[i] == 'U' || letra[i] == 'u'){
			vogal++;
		}
	}
	cout << vogal;
	
	return 0;
}
