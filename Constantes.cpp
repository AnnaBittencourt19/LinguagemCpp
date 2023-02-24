#include <iostream>
#define VidasDefine 11 //declara o define sem ponto e virgula e no cabeçalho. #define é basicamente a mesma coisa q const
int main()
{
	const int NUM_VIDAS = 10; //declara a constante
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	int VidasTotaisDefine = VidasDefine - 2;

	std::cout << "Total de vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << "\n";

	std::cout << "Total de vidas: " << VidasTotaisDefine << "\n";
	std::cout << "Valor constante VidasDefine: " << VidasDefine << "\n";


	system("PAUSE");
}