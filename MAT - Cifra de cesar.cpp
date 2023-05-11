// entrada = n e m , mensagemcifrada
// saida = mensagem decifrada
// pega os elementos com n (linha) e mostra com m(coluna)

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, m;
	char mensagem[10][10];

	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++) // i corresponde a linhas e n o número de linhas que o usúario digitou
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mensagem[i][j];
		}
	}

	for (int j = 0; j < m; j++) // inverte pra mostrar
	{
		for (int i = 0; i < n; i++)
		{
			cout << mensagem[i][j];
		}
	}


	return 0;
}
