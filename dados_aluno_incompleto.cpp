//entrada = matricula (int) , nome (char[40]), sexo (char), n1 (int), n2(int)
// calculo: media = (n1 + n2)/2
//saida = matricula e media(precisão 1)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int matricula, n1, n2;
	double media;
	char sexo, nome[40];
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(1);
	
	cout << "Digite a matrícula: " << endl;
	cin >> matricula;
	
	cout << "Digite o nome: " <<endl;
	cin.ignore( );
	cin.getline(nome, 40);
	
	cout << "Digite o sexo (F ou M): " <<endl;
	cin >> sexo;
	
	cout << "Digite a primeira nota: " << endl;
	cin >> n1;
	cout << "Digite a segunda nota: " << endl;
	cin >> n2;
	
	cout << "-------------------------------------" <<endl;
	
	media = (n1+n2)/2.; 
	cout << "Matrícula: " << matricula << endl;
	cout << "Média: " << media << endl;
	
	
	return 0;
}