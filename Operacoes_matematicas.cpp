#include<iostream>
#include<tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero01, Numero02;
	int Soma, Subtracao, Multiplicacao, Divisao, Modulo;


	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Primeiro n�mero = " << Numero01 << std::endl;
	
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Segundo n�mero = " << Numero02 << std::endl;

	std::cout << "\n";
	Soma = Numero01 + Numero02;
	std::cout << "A soma dos dois n�meros: " << Soma << "\n";
	
	std::cout << "\n";
	Subtracao = Numero01 - Numero02;
	std::cout << "A subtra��o dos dois n�meros: " << Subtracao << "\n";

	std::cout << "\n";
	Multiplicacao = Numero01 * Numero02;
	std::cout << "A multiplica��o dos dois n�meros �: " << Multiplicacao << "\n";

	std::cout << "\n";
	Divisao = Numero01 / Numero02;
	std::cout << "A divis�o dos dois n�meros �: " << Divisao << "\n";

	std::cout << "\n";
	Modulo = Numero01 % Numero02;
	std::cout << "O m�dulo dos dois n�meros �: " << Modulo << "\n";


	system("PAUSE");
}