#include<iostream>

int main()
{
	float Metros, Cm;
	std::cout << "Digite o valor em metros: ";
	std::cin >> Metros;
	system("clear||cls");

	Cm = Metros * 100;

	std::cout << Metros << " metros equivale a " << Cm << " cm" << "\n";

	system("PAUSE");
}
