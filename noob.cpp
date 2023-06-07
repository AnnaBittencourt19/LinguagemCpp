#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	// struct e variaveis que fazem parte dela
	struct Aluno
	{
		int matricula;
		float nota1, nota2, media;
	};
	// objeto
	Aluno aluno;

	//entrada
	cin >> aluno.matricula;
	cin >> aluno.nota1;
	cin >> aluno.nota2;

	//calcular média
	aluno.media = (aluno.nota1*2 + aluno.nota2*3) / 5;
	// saida
	cout << "Matricula do aluno: " << aluno.matricula <<  endl;
	cout << "Nota da primeira prova: " << aluno.nota1 <<  endl;
	cout << "Nota da segunda prova: " <<  aluno.nota2 <<  endl;
	cout << "Media:" << aluno.media << endl;

	return 0;
}
