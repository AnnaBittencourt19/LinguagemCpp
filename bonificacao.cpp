//entrada = matricula (int), nome (char [60]) , salario_atual(double), percentual_bonificacao (int)
// calculo: salario_final = salario_atual + salario_atual *  percentual_bonificacao/100
// saida = matricula, nome, salario_final
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int matricula;
	char nome[60];
	double salario_final, salario_atual, percentual_bonificacao;
	
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	cout << "Digite a matrícula do funcionário: " <<endl;
	cin >> matricula;
	
	cout << "Digite o nome do funcionário: " <<endl;
	cin.ignore( );
	cin.getline(nome,60);
	
	cout << "Digite o sálario atual do funcionário: " <<endl;
	cin >> salario_atual;
	
	cout << "Digite a bonificação (em porcentagem): " <<endl;
	cin >> percentual_bonificacao;
	
	cout << "--------------------------------------" << endl;
	
	salario_final = salario_atual + salario_atual *  (percentual_bonificacao/100);
	cout << "Matrícula: " << matricula <<endl;
	cout << "Nome: " << nome << endl;
	cout << "Salário final: R$ "<< salario_final <<endl;
	return 0; 
}