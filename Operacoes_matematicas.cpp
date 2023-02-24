#include<iostream>
#include<tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero01, Numero02;
	int Soma, Subtracao, Multiplicacao, Divisao, Modulo;


	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Primeiro número = " << Numero01 << std::endl;
	
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Segundo número = " << Numero02 << std::endl;

	std::cout << "\n";
	Soma = Numero01 + Numero02;
	std::cout << "A soma dos dois números: " << Soma << "\n";
	
	std::cout << "\n";
	Subtracao = Numero01 - Numero02;
	std::cout << "A subtração dos dois números: " << Subtracao << "\n";

	std::cout << "\n";
	Multiplicacao = Numero01 * Numero02;
	std::cout << "A multiplicação dos dois números é: " << Multiplicacao << "\n";

	std::cout << "\n";
	Divisao = Numero01 / Numero02;
	std::cout << "A divisão dos dois números é: " << Divisao << "\n";

	std::cout << "\n";
	Modulo = Numero01 % Numero02;
	std::cout << "O módulo dos dois números é: " << Modulo << "\n";


	system("PAUSE");
}