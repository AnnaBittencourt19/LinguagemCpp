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
	std::cout << "O valor inteiro �: " << Inteiro << std::endl;
	std::cout << "O tamanho da vari�vel Inteiro �: " << sizeof(Inteiro) << std::endl;
	std::cout << "O endere�o da vari�vel inteiro �: " << &Inteiro << std::endl;
	std::cout << "\n";

	std::cout << "O valor float �: " << Flutuante << std::endl;
	std::cout << "O tamanho da vari�vel Flutuante �: " << sizeof(Flutuante) << std::endl;
	std::cout << "O endere�o da vari�vel Flutuante �: " << &Flutuante << std::endl;
	std::cout << "\n";

	std::cout << "O valor double �: " << std::setprecision(11)  << Doubl << std::endl;
	std::cout << "O tamanho da vari�vel Doubl �: " << sizeof(Doubl) << std::endl;
	std::cout << "O endere�o da vari�vel Doubl �: " << &Doubl << std::endl;
	std::cout << "\n";

	std::cout << "O valor char �: " << Caracter << std::endl;
	std::cout << "O tamanho da vari�vel Caracter �: " << sizeof(Caracter) << std::endl;
	std::cout << "O endere�o da vari�vel Caracter �: " << &Caracter << std::endl;
	std::cout << "\n";
	
	system("PAUSE");
}