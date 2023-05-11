// entrada = numeros, x
// while e do while pra ver se tem 0
// if pra ver se tem igual
// saida = se o elemento foi encontrado

#include <iostream>

using namespace std;

int main()
{
	int numeros[100], x = 0, elemento, flag = 0;

	cin >> numeros [x];

	//para de pedir numeros assim q digita o 0
	while(numeros[x] != 0)
	{
		x++;
		cin >> numeros[x];
	}

	cin >> elemento;


	for (int i = 0; i < x ; i++)
	{
		if (numeros[i] == elemento)
		{
			cout << "Elemento " << elemento << " encontrado na posicao " << i <<endl;
			flag++;
		}

	}
	if(flag == 0)
	{
		cout << "Elemento " << elemento << " nao foi encontrado";
	}
	else
	{

	}
	return 0;
}
