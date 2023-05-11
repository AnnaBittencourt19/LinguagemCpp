//entrada = número de votos, avaliação
// saida = resultado da enquete

#include <iostream>

using namespace std;

int main()
{
	int numerovotos, avaliacao[1000], positiva = 0, negativa = 0;

	cin >> numerovotos;

	if(numerovotos < 1000 && numerovotos > 0)
	{
		for (int i = 0; i < numerovotos; i++)
		{
			cin >> avaliacao[i];
		}
		for (int i = 0; i < numerovotos; i++)
		{
			if (avaliacao[i] == 1)
			{
				positiva++;
			}
			if(avaliacao[i] == -1)
			{
				negativa++;
			}
		}
		if (positiva > negativa)
		{
			cout << "A maioria gostou" << endl;
		}
		else if (positiva == negativa)
			{
				cout << "Deu empate" << endl;
			}
		else
		{
			cout << "A maioria nao gostou" << endl;
		}
	}
	return 0;
}
