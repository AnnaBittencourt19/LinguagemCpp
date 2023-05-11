//entrada = nome[50], estado [2], idade (int)
//saida = nome[50], estado [2], idade (int)
#include <iostream>
using namespace std;
int main()
{
	char nome[50], estado[2];
	int idade;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o nome do aluno: " << endl;
	cin.getline(nome,50);
	
	cout << "Digite o estado (sigla): " << endl;
	cin >> estado;
	
	cout << "Digite a idade: " <<endl;
	cin >> idade;
	
	cout << "------------------- Informações do Aluno ----------------------" <<endl;
	
	cout << "Nome: " << nome << endl;
	cout << "Estado: " << estado << endl;
	cout << "Idade: " << idade << endl;
	
	return 0;
}
