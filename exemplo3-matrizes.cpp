// entrada = nome
//5 linhas por ser 5 nomes
#include <iostream>
#include <cstring> // biblioteca para usar strcmp
using namespace std;

int main()
{
	char nome[5][21],p[21];
	int i, t = 0;
	
	for (i = 0; i < 5; i++){
		cin.getline (nome[i],21);
	}
	
	cout << "Nome armazenados: " << endl;
	for (i = 0; i < 5; i++){
		cout << nome[i] << endl; // indicar linha
	}
	cout << "qual nome? ";
	cin.getline(p,21);
	
	for (i = 0; i < 5; i++){
		if (strcmp(p,nome[i])== 0){ // comparar strings
			t=1;
		}
	}
	if (t == 1){
		cout << "OK!" << endl;
	}
	else {
		cout << "Nao encontrado..." <<endl;
	}
	return 0;
}