//entrada = idade_funcionario, tempo_servico
// condi��es = idade >= 65 && tempo_servico >= 30 e idade >= 60 && tempo_servico >= 25
// saida = qualificado ou n�o

#include<iostream>

using namespace std;

int main()
{
	int idade_funcionario, tempo_servico;
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite a idade do funcion�rio: " << endl;
	cin >> idade_funcionario;
	
	cout << "Digite o tempo de servi�o do funcion�rio" <<endl;
	cin >> tempo_servico;
	cout << "------------------------------------------" <<endl;
	
	if (idade_funcionario >= 65 || tempo_servico >= 30 ){//|| idade_funcionario >= 60 && tempo_servico >= 25){
		cout << "O funcion�rio est� qualificado" <<endl;
	}
	else if (idade_funcionario >= 60 && tempo_servico >= 25){
		cout << "O funcion�rio est� qualificado" <<endl;
	}
	else {
		cout << "O funcion�rio n�o est� qualificado" <<endl;
	}
	return 0;
}