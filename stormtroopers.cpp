#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	// struct Stormtrooper
	struct Stormtrooper
	{
		int id;
		double im, fa, ga;
	};

	int x = 0;
	Stormtrooper stormtrooper[100];

	// entrada
	cin >> stormtrooper[x].id;
	while (stormtrooper[x].id != 0)
	{
		cin >> stormtrooper[x].im;
		cin >> stormtrooper[x].fa;

		// calcular GA
		stormtrooper[x].ga = (stormtrooper[x].im + stormtrooper[x].fa) / 2;

		x++;
		cin >> stormtrooper[x].id;
	}

	// achar o Stormtrooper que será escolhido
	int maiorAptidao = 0;
	for (int i = 1; i < x; i++)
	{
		if (stormtrooper[i].ga > stormtrooper[maiorAptidao].ga)
		{
			maiorAptidao = i; // indice
		}
	}

	// saída
	cout << "Stormtrooper escolhido: " << stormtrooper[maiorAptidao].id << endl;
	cout << "GA: " << stormtrooper[maiorAptidao].ga << endl;

	return 0;
}
