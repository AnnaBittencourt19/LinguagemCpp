#include <iostream>
#include <tchar.h> 
//biblioteca tchar.h = tem haver com caracteres, basicamente usar quando tem acento e �

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); //configurar para o portugu�s (acentuar no terminal)
	int NumVidas = 5; //cria uma vari�vel chamada NumVidas que recebe o valor 5
	int Pontuacao = 1350; //int = n�mero inteiro(tipo da vari�vel), vari�veis s�o armazenadas na mem�ria RAM
	std::cout << "********INICIO DO JOGO**********" << std::endl;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << " Bytes \n";
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Endere�o que pontua��o ocupa na mem�ria RAM: " << &Pontuacao << std::endl; //& significa local na mem�ria RAM 
	std::cout << "*******************" << std::endl;

	std::cout << "********DURANTE O JOGO**********" << std::endl;
	Pontuacao = Pontuacao + 150; //supondo que o jogador adquiriu 150 pontos
	NumVidas = NumVidas - 1; //supondo que o jogador perdeu uma vida
	std::cout << "Pontua��o:" << Pontuacao << std::endl;
	std::cout << "N�mero de Vidas:" << NumVidas << std::endl;
	std::cout << "*******************" << std::endl;
	//Como renomear uma v�rivel em todas as linhas que ela aparece:
	//Seleciona v�riavel e aperta Ctrl+R+Ctrl+R e a� � s� renomear


	system("PAUSE");

}

