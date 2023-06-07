#include <iostream>
#include <cstring> // biblioteca pra usar strcmp (strcmp(string1 , string2) = compara string)

using namespace std;
int main()
{
	char palavra1[100], palavra2[100], palavra3[100];


	cin >> palavra1;
	cin >> palavra2;
	cin >> palavra3;

	//colocar as palavras em ordem alfabética
	if (strcmp(palavra1, palavra2) < 0)   // esse strcmp vai comparar a palavra1 e palavra2
	{
		if (strcmp(palavra1, palavra3) < 0)   // compara palavra1 e palavra3
		{
			cout << palavra1 << " ";
			if (strcmp(palavra2, palavra3) < 0)   // compara palavra2 e palavra3
			{
				cout << palavra2 << " " << palavra3;
			}
			else     // caso a palavra2 seja maior ou igual a palavra3
			{
				cout << palavra3 << " " << palavra2;
			}
		}
		else     // palavra1 é maior ou igual a palavra3
		{
			cout << palavra3 << " " << palavra1 << " " << palavra2;
		}
	}
	else     // palavra2 é maior ou igual a palavra1
	{
		if (strcmp(palavra2, palavra3) < 0)   // compara palavra2 e palavra3
		{
			cout << palavra2 << " ";
			if (strcmp(palavra1, palavra3) < 0)   // compara palavra1 e palavra3
			{
				cout << palavra1 << " " << palavra3;
			}
			else     // palavra1 é maior ou igual a palavra3
			{
				cout << palavra3 << " " << palavra1;
			}
		}
		else     // palavra3 é maior ou igual a palavra2
		{
			cout << palavra3 << " " << palavra2 << " " << palavra1;
		}
	}
	
	// se for <0 significa que a palavra vem antes na ordem alfabetica
	// se for >0 significa que a palavra vem depois na ordem alfabetica



	return 0;
}
