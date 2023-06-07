#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	// struct e variaveis que fazem parte dela
	struct Aluno
	{
		int matricula;
		float nota1, nota2;
	};

	// objeto
	Aluno aluno;

	//entrada
	cin >> aluno.matricula;
	cin >> aluno.nota1;
	cin >> aluno.nota2;

	cout << fixed << setprecision(2);

	// saida
	cout << "Matricula do aluno: " << aluno.matricula <<  endl;
	cout << "Nota da primeira prova: " << aluno.nota1 <<  endl;
	cout << "Nota da segunda prova: " <<  aluno.nota2 <<  endl;

	return 0;
}
