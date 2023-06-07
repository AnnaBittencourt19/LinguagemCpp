//entrada = tempos de cada competidor, acaba no -1(usa while)
// tem que classificar os corredores e mostrar o numero deles sendo o primeiro 0, ou seja, imprimir i;

#include <iostream>

using namespace std;

int main()
{
	double tempos[100], aux;
	int x = 0;
	//enquanto o tempo for diferente de -1, será pedido novos tempos
	while(tempos[x] != -1)
	{
		x++;
		cin >> tempos[x];
	}
	for(int i = 0; i < x - 1 ; i++)
	{
		for (int j = 0; j < x - 1 ; j++)
		{
			if (tempos[j] > tempos[j+1])
			{
				aux = tempos[j];
				tempos[j] = tempos[j+1];
				tempos [j+1] = aux;
			}
		}
	}
	for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (tempos[i] == tempos[j])
            {
                cout << j << endl;
            }
        }
    }

	return 0;
}
