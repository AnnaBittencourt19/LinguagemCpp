//entrada = número de um funcionario (num_func), numero de horas trabalhadas (num_horas) e valor hora(valor_hora)
// calculo = num_horas * valor_hora
// saida = salario
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num_func, num_horas;
	double valor_hora, salario;
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite o número do funcionário:" << endl;
	cin >> num_func;
	
	cout << "Digite a quantidade de horas trabalhadas: " <<endl;
	cin >> num_horas;
	
	cout << "Digite o valor que o funcionário recebe por hora trabalhada: " <<endl;
	cout << fixed << setprecision(2);
	cin >> valor_hora;
	
	salario = num_horas * valor_hora;
	
	cout << "NUMBER = " << num_func << endl;
	cout << "SALARY = U$ " << salario;
	return 0;
}
