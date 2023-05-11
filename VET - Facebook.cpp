//entrada =  numero de amigos no Facebook
// saída = mostrar o maior e o menor valor

#include<iostream>

using namespace std;

int main()
{
	int num[999], i, ma, me, usuarios;

	cin >> usuarios;

	if (usuarios < 1000)
	{
		for (int i = 0; i < usuarios; i++)
		{
			cin >> num[i];
		}

		ma = num[0];
		me = num[0];

		for (int i = 0; i < usuarios; i++)
		{
			if(num[i] > ma)
			{
				ma = num[i];
			}
		}

		for (int i = 0; i < usuarios; i++)
		{
			if(num[i] < me)
			{
				me = num[i];
			}
		}

		cout << "Menor numero de contatos: " << me << endl;
		cout << "Maior numero de contatos: " << ma << endl;
	}
	return 0;
}
