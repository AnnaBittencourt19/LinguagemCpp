#include <iostream>
#include <tchar.h> //escrever em português

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));//escrever em portugues
	int Numero = 45; //45 será armazenado em número
	std::cout << "Valor Número:" << Numero << std::endl; //Vai exibir o valor da variável de numero
	system("PAUSE");
	
}