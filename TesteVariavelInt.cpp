#include <iostream>
#include <tchar.h> //escrever em portugu�s

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));//escrever em portugues
	int Numero = 45; //45 ser� armazenado em n�mero
	std::cout << "Valor N�mero:" << Numero << std::endl; //Vai exibir o valor da vari�vel de numero
	system("PAUSE");
	
}