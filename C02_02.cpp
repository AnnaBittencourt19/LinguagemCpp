#include <bits/stdc++.h>
using namespace std;
int main()
{
	int nF, N, I;
	char pesquisa;
	struct Filme
	{
		char nome[150];
		string categoria;
		int classificacao;
		int nota;
		int dia;
		int mes;
		int ano;
		int popular;
	};
	Filme filme[100];
	cout << " numeros de filmes" << endl;
	cin >> nF;
	for (int i = 0; i < nF; i++)
	{
		cout << endl << "Nome:";
		cin.ignore();
		cin.getline(filme[i].nome, 1000);
		cout << endl << "Categoria:";
		cin >> filme[i].categoria;
		cout << endl << "Classificacao:";
		cin >> filme[i].classificacao;
		cout << endl << "Nota:";
		cin >> filme[i].nota;
		cout << endl << "Dia:";
		cin >> filme[i].dia;
		cout << endl << "Mes:";
		cin >> filme[i].mes;
		cout << endl << "Ano:";
		cin >> filme[i].ano;
		cout << endl << "Popularidade:";
		cin >> filme[i].popular;
	}
	cout << "Como voce quer procurar?" << endl << "nome : N    categoria : C    classificacao : I    Nota do Filme : A    Ano : D    Popular : P    Lancamentos : L" << endl;
	cin >> pesquisa;
	if (pesquisa == 'N')
	{
		char Nome[150];
		cin.ignore();
		cin.getline(Nome, 100);
		for (int i = 0; i < nF; i++)
		{
			if (strcmp(Nome, filme[i].nome) == 0)
			{
				N++;
				I = i;
			}
		}
	}
	else if (pesquisa == 'C')
	{
		char Categoria[150];
		cin >> Categoria;
		for (int i = 0; i < nF; i++)
		{
			if (strcmp(Categoria, filme[i].categoria) == 0)
			{
				N++;
				I = i;
			}
		}
	}
	else if (pesquisa == 'I')
	{
		int idade;
		cin >> idade;
		for (int i = 0; i < nF; i++)
		{
			if (idade >= filme[i].classificacao)
			{
				N++;
				I = i;
			}
		}
	}
	else if (pesquisa == 'A')
	{
		int Nota;
		cin >> Nota;
		for (int i = 0; i < nF; i++)
		{
			if (Nota <= filme[i].nota)
			{
				N++;
				I = i;
			}
		}
	}
	else if (pesquisa == 'D')
	{
		int idade;
		cin >> idade;
		for (int i = 0; i < nF; i++)
		{
			if (idade >= filme[i].classificacao)
			{
				N++;
				I = i;
			}
		}
	}
	else if (pesquisa == 'P')
	{
		int idade;
		cin >> idade;
		for (int i = 0; i < nF; i++)
		{
			if (idade >= filme[i].classificacao)
			{
				N++;
				I = i;
			}
		}
	}
	else if (pesquisa == 'L')
	{
		int idade;
		cin >> idade;
		for (int i = 0; i < nF; i++)
		{
			if (idade >= filme[i].classificacao)
			{
				N++;
				I = i;
			}
		}
	}
	else
	{
		cout << "Meio de pesquisa nao valido" << endl;
		while( (pesquisa == 'N') || (pesquisa == 'C') || (pesquisa == 'I') || (pesquisa == 'A') || (pesquisa == 'D') || (pesquisa == 'P') || (pesquisa == 'L'))
		{
			cout << "tente novamente" << endl;
			cin >> pesquisa;
		}
	}
	if(N > 0)
	{
		cout << filme[I].nome << endl;
		cout << filme[I].classificacao << endl;
		cout << filme[I].categoria << endl;
		cout << filme[I].dia << "/" << filme[I].mes << "/" << filme[I].ano << endl;
		cout << filme[I].popular << endl;
		cout << filme[I].nota << endl;
	}
	return 0;
}
