//Fa�a um programa em C++ que leia um vetor de n�meros inteiros de tamanho 10  e exiba a soma de todos os valores contidos nesse vetor.


#include <iostream>

using namespace std;

int main (){
	
	int num[5], soma = 0;
	
	for (int i = 0; i < 5; i++){
	cin >> num [i];
	soma = soma + num[i];
	}
	cout << soma;
	
	return 0;
}