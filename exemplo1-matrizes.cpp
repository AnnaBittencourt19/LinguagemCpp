// entrada = elementos

#include <iostream>

using namespace std;

int main()
{
	double matriz[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout <<endl; // para pular a linha usasse isso apenas no for da linha(i)
		for (int j = 0; j < 3; j++)
		{
			cout << matriz[i][j]<<"  "; //no lugar de espaço usar /t("/t")
		}
	}
	return 0;
}
