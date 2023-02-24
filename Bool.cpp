#include<iostream>

int main()
{
	bool bAchou = 1; //b antes do nome para indicar que é bool. Valor 1 = Verdadeiro
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0; //Valor 0 = Falso
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true; 
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd'; // Valor diferente de 0 = True
	std::cout << "Valor de bAchou: " << bAchou << "\n";
 
	//A execução responde com 1 e 0. Sendo 0 false e 1 é true

	system("Pause");

}