// entrada = elementos
// oq pediu = soma linha 0, soma linha 1, soma linha 2, diagonal principal
#include <iostream>

using namespace std;

int main()
{
	double matriz[3][3]; //matriz de ordem 3

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "mat[" << i << "]" << "[" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << endl; // para pular a linha usasse isso apenas no for da linha(i)
		for (int j = 0; j < 3; j++)
		{
			cout << matriz[i][j] << "  "; //no lugar de espaço usar /t("/t")
		}
	}
	for (int i = 0; i < 3; i++)
	{
		int soma = 0;
		for (int j = 0; j < 3; j++)
		{
			soma = soma + matriz[i][j];
		}
		cout << endl << "Soma da linha " << i << ": " << soma << endl;
	}
	cout << endl << "Elementos da DP: ";
	for (int i = 0; i < 3; i++)
	{
		cout << matriz[i][i] << "   ";
	}
	cout << endl <<"Elementos da DS: " ;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if(i + j == 2){
				cout << matriz[i][j] << "  ";
			}
		}
	}

	return 0;
}
