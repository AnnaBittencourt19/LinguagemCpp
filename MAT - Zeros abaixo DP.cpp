// lê os elementos da matriz e as proporções da matriz
// analisa a quantidade de 0 (if e for)
// abaixo da diagonal principal:
//saida = quantidade de 0

#include <iostream>

using namespace std;

int main()
{
	int n, m, mat[50][50], zer = 0;

	cin >> n; //ordem da matriz quadrada
	m = n;


	//Ler os elementos da matriz:
	if(n < 50)
	{
		for (int i = 0; i < n; i++) // i corresponde a linhas e n o número de linhas que o usúario digitou
		{
			for (int j = 0; j < m; j++)
			{
				cin >> mat[i][j];
			}
		}

		for (int i = 0; i < n; i++)
		{
			cout << endl; // para pular a linha usa isso apenas no for da linha(i)
			for (int j = 0; j < m; j++)
			{
				cout << mat[i][j] << "  "; // espaço entre as colunas
			}
		}

		//quantidade de zeros abaixo da diagonal principal
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++) //para ser abaixo da diagonal principal a "posição" da coluna tem que ser menor doq a da linha
			{
				if (mat[i][j] == 0)
				{
					zer++;
				}
			}
		}
		cout <<endl << zer;
	}




	return 0;
}
