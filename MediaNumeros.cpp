#include<iostream>
#include<tchar.h>

int main()
{
	float Num1, Num2, Num3, Media;
	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "Digite o primeiro n�mero: " << "\n";
	std::cin >> Num1;
	std::cout << "Digite o segundo n�mero: " << "\n";
	std::cin >> Num2;
	std::cout << "Digite o terceiro n�mero: " << "\n";
	std::cin >> Num3;

	Media = (Num1 + Num2 + Num3) / 3;

	std::cout << "Os n�meros escolhidos s�o: " << Num1 <<" " << Num2 << " " << Num3 << "\n";
	std::cout << "A m�dia dos n�meros �: " << Media;

}
