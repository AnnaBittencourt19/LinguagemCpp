//entrada = idade_funcionario, tempo_servico
// condições = idade >= 65 && tempo_servico >= 30 e idade >= 60 && tempo_servico >= 25
// saida = qualificado ou não

#include<iostream>

using namespace std;

int main()
{
	int idade_funcionario, tempo_servico;
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Digite a idade do funcionário: " << endl;
	cin >> idade_funcionario;
	
	cout << "Digite o tempo de serviço do funcionário" <<endl;
	cin >> tempo_servico;
	cout << "------------------------------------------" <<endl;
	
	if (idade_funcionario >= 65 || tempo_servico >= 30 ){//|| idade_funcionario >= 60 && tempo_servico >= 25){
		cout << "O funcionário está qualificado" <<endl;
	}
	else if (idade_funcionario >= 60 && tempo_servico >= 25){
		cout << "O funcionário está qualificado" <<endl;
	}
	else {
		cout << "O funcionário não está qualificado" <<endl;
	}
	return 0;
}