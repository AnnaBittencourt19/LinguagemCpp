#include <iostream>
#include <tchar.h> 
//biblioteca tchar.h = tem haver com caracteres, basicamente usar quando tem acento e ç

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); //configurar para o português (acentuar no terminal)
	int NumVidas = 5; //cria uma variável chamada NumVidas que recebe o valor 5
	int Pontuacao = 1350; //int = número inteiro(tipo da variável), variáveis são armazenadas na memória RAM
	std::cout << "********INICIO DO JOGO**********" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << " Bytes \n";
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Endereço que pontuação ocupa na memória RAM: " << &Pontuacao << std::endl; //& significa local na memória RAM 
	std::cout << "*******************" << std::endl;

	std::cout << "********DURANTE O JOGO**********" << std::endl;
	Pontuacao = Pontuacao + 150; //supondo que o jogador adquiriu 150 pontos
	NumVidas = NumVidas - 1; //supondo que o jogador perdeu uma vida
	std::cout << "Pontuação:" << Pontuacao << std::endl;
	std::cout << "Número de Vidas:" << NumVidas << std::endl;
	std::cout << "*******************" << std::endl;
	//Como renomear uma várivel em todas as linhas que ela aparece:
	//Seleciona váriavel e aperta Ctrl+R+Ctrl+R e aí é só renomear


	system("PAUSE");

}

