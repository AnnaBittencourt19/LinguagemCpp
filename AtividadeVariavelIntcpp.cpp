/*Crie um programa em C++ que:
Declara uma vari�vel do tipo int de nome NumComputadores
Declara uma vari�vel do tipo int de nome SerialComputadores
Inicia a vari�vel NumComputadores com o valor 100;
Inicia a vari�vel SerialComputadores com o valor 11111;
Coloca na tela uma linha com cifr�es $$$$$$$$$$$$$$
Coloca na tela o nome e os valores das vari�veis NumComputadores e SerialComputadores
Coloca nom final na tela uma linha com cifr�es $$$$$$$$$$$$$$
Obs: lembre-se de colocar o comando para Pausar a Tela
*/
#include<iostream>

int main()
{
	int NumComputadores, SerialComputadores;
	NumComputadores = 100; //cria um local na  mem�ria com o valor(inteiro) 100
	SerialComputadores = 11111;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "\tValor de NumComputadores:" << NumComputadores << std::endl; // \t cria uma tabula��o (meio que � um paragrafo)
	std::cout << "\tValor de SerialComputadores:" << SerialComputadores << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	system("PAUSE");
	return 0;
}