#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ddd;
	string cidade;
	
	getline (cin, cidade); // esse é o getline especifico para string

	if(cidade == "Brasilia")
	{
		cout << "61";
	}
	else if(cidade == "Salvador")
	{
		cout << "71";
	}
	else if(cidade == "Sao Paulo")
	{
		cout << "11";
	}
	else if(cidade == "Rio de Janeiro")
	{
		cout << "21";
	}
	else if(cidade == "Juiz de Fora")
	{
		cout << "32";
	}
	else if(cidade == "Campinas")
	{
		cout << "19";
	}
	else if(cidade == "Vitoria")
	{
		cout << "27";
	}
	else if(cidade == "Belo Horizonte")
	{
		cout << "31";
	}
	else if(cidade == "Santa Rita do Sapucai")
	{
		cout << "35";
	}
	else
	{
		cout << "DDD nao cadastrado";
	}
	return 0;
}
