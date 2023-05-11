//entrada = n linha, m coluna
// tem duas matrizes (mat1, mat2) então dois fors de "cin"

#include <iostream>

using namespace std;

int main()
{
	int n, m, mat1[10][10],mat2[10][10],mat3[10][10],i,j;
	
	cin >> n;
	cin >> m;
	
	//Digitar os elementos da matriz 1:
		for (int i = 0; i < n; i++) // i corresponde a linhas e n o número de linhas que o usúario digitou
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mat1[i][j];
		}
	}
	
	//Digitar os elementos da matriz 2:
		for (int i = 0; i < n; i++) // i corresponde a linhas e n o número de linhas que o usúario digitou
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mat2[i][j];
		}
	}
	
	//somar mat1 + mat2:
		for (int i = 0; i < n; i++) // i corresponde a linhas e n o número de linhas que o usúario digitou
	{
		for (int j = 0; j < m; j++)
		{
			mat3[i][j] = mat1[i][j]+mat2[i][j]; //soma 
		}
	}
	//Imprimir a matriz: 
	for (int i = 0; i < n; i++)
	{
		cout << endl; // para pular a linha usa isso apenas no for da linha(i)
		for (int j = 0; j < m; j++)
		{
			cout << mat3[i][j] << "  "; // espaço entre as colunas
		}
	}
	return 0;
}