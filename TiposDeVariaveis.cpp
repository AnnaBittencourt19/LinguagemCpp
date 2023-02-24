#include<iostream>
#include<tchar.h>
#include<iomanip>

int main()
{
	int Inteiro = 2;
	float Flutuante = 2.23;
	double Doubl = 234.93939483;
	char Caracter = 'a';
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	std::cout << "O valor inteiro é: " << Inteiro << std::endl;
	std::cout << "O tamanho da variável Inteiro é: " << sizeof(Inteiro) << std::endl;
	std::cout << "O endereço da variável inteiro é: " << &Inteiro << std::endl;
	std::cout << "\n";

	std::cout << "O valor float é: " << Flutuante << std::endl;
	std::cout << "O tamanho da variável Flutuante é: " << sizeof(Flutuante) << std::endl;
	std::cout << "O endereço da variável Flutuante é: " << &Flutuante << std::endl;
	std::cout << "\n";

	std::cout << "O valor double é: " << std::setprecision(11)  << Doubl << std::endl;
	std::cout << "O tamanho da variável Doubl é: " << sizeof(Doubl) << std::endl;
	std::cout << "O endereço da variável Doubl é: " << &Doubl << std::endl;
	std::cout << "\n";

	std::cout << "O valor char é: " << Caracter << std::endl;
	std::cout << "O tamanho da variável Caracter é: " << sizeof(Caracter) << std::endl;
	std::cout << "O endereço da variável Caracter é: " << &Caracter << std::endl;
	std::cout << "\n";
	
	system("PAUSE");
}