//entrada = n e m linhas e colunas, elementos da matriz

// saida= matriz 

#include <iostream>

using namespace std;

int main()
{
	int matriz[10][10], n, m, i /*linha*/ , j/*coluna*/;
	
	cin >> n;
	cin >> m;
	
	
	//Digitar os elementos da matriz:
		for (int i = 0; i < n; i++) // i corresponde a linhas e n o número de linhas que o usúario digitou
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matriz[i][j];
		}
	}
	
	//Imprimir a matriz: 
	for (int i = 0; i < n; i++)
	{
		cout << endl; // para pular a linha usa isso apenas no for da linha(i)
		for (int j = 0; j < m; j++)
		{
			cout << matriz[i][j] << "  "; // espaço entre as colunas
		}
	}
	return 0;
}
