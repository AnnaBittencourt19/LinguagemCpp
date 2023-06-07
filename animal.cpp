#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tipo1, tipo2, tipo3;

	getline (cin, tipo1); // esse é o getline especifico para string
	getline (cin, tipo2);
	getline (cin, tipo3);

	if(tipo1 == "vertebrado" && tipo2 == "ave" && tipo3 == "carnivoro")
	{
		cout << "aguia";
	}
	else if(tipo1 == "vertebrado" && tipo2 == "ave" && tipo3 == "onivoro")
	{
		cout << "pomba";
	}
	else if(tipo1 == "vertebrado" && tipo2 == "mamifero" && tipo3 == "onivoro")
	{
		cout << "homem";
	}
	else if(tipo1 == "vertebrado" && tipo2 == "mamifero" && tipo3 == "herbivoro")
	{
		cout << "vaca";
	}
	else if(tipo1 == "invertebrado" && tipo2 == "inseto" && tipo3 == "hematofago")
	{
		cout << "pulga";
	}
	else if(tipo1 == "invertebrado" && tipo2 == "inseto" && tipo3 == "herbivoro")
	{
		cout << "lagarta";
	}
	else if(tipo1 == "invertebrado" && tipo2 == "analideo" && tipo3 == "hematofago")
	{
		cout << "sanguessuga";
	}
	else if(tipo1 == "invertebrado" && tipo2 == "analideo" && tipo3 == "onivoro")
	{
		cout << "minhoca";
	}
		return 0;
}
