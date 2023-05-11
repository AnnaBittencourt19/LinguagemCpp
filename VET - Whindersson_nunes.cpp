//entrada = numerovideos, numerovisualizacao
// saida = quantos videos com mais de um milhao

#include<iostream>

using namespace std;

int main()
{
	int numerovideos, numerovisualizacao[999], i, mais = 0, menos = 0;

	cin >> numerovideos;

	if (numerovideos < 1000)
	{
		for(i = 0; i < numerovideos; i++)
		{
			cin >> numerovisualizacao[i];
		}
		for (i = 0; i < numerovideos; i++)
		{
			if (numerovisualizacao[i] >= 10000000)
			{
				mais++;
			}
			if (numerovisualizacao[i] < 10000000)
			{
				menos++;
			}
		}
		cout << mais << " video(s) com mais de 10M views" << endl;
		cout << menos << " video(s) com menos de 10M views" << endl;
	}
	return 0;
}
