#include<iostream>
#include<tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Num;
	std::cout << "Digite um número: " << "\n";
	std::cin >> Num;
	system("clear||cls");
	std::cout << "O número escolhido foi: " << Num << "\n";
	system("PAUSE");
}