//entrada = numalunos, notas
// saida = medialunos, acima, abaixo

#include<iostream>
#include<iomanip>

using namespace std;

int main ()
{

	int notas[999], numalunos, acima=0, abaixo=0, soma = 0;
	double medialunos = 0;

	cin >> numalunos;

	for (int i = 0; i < numalunos; i++)
	{
		cin >> notas[i];
		soma += notas[i];
	}
	cout << fixed << setprecision(2);
	medialunos = soma * 1.0 / numalunos;

	for (int i = 0; i < numalunos; i++)
	{
		if(notas[i] > medialunos)
		{
			acima++;
		}
		if(notas[i] < medialunos)
		{
			abaixo++;
		}
	}

	cout << "Media da turma: " << medialunos <<endl;
	cout << "Alunos com nota acima da media: " << acima <<endl;
	cout << "Alunos com nota abaixo da media: " << abaixo <<endl;
	return 0;
}
