#include<iostream>
#include<tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	float Bim1, Bim2, Bim3, Bim4, Media;

	std::cout << "Digite a nota obtida pelo aluno no primeiro bimestre: ";
	std::cin >> Bim1;
	system("clear||cls");

	std::cout << "Digite a nota obtida pelo aluno no segundo bimestre: ";
	std::cin >> Bim2;
	system("clear||cls");

	std::cout << "Digite a nota obtida pelo aluno no terceiro bimestre: ";
	std::cin >> Bim3;
	system("clear||cls");

	std::cout << "Digite a nota obtida pelo aluno no quarto bimestre: ";
	std::cin >> Bim4;
	system("clear||cls");

	Media = (Bim1 + Bim2 + Bim3 + Bim4) / 4;

	if (Media >= 6)
	{
		std::cout << "O aluno foi aprovado! A média dele foi %f" << Media;
	}
	else
	{
		std::cout << "O aluno foi reprovado! A média dele foi " << Media;
	}
}