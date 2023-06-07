#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	struct dados
	{
		int mat;
		double n1;
		double n2;
		double md;
		char cond[11];
	}; //!!!  ;

	dados vet[5];
	int i, n;

	//entrada
	cout << "Qtas criancas (1-5)?";
	cin >> n; // tem que ter validacao while

	for (i = 0; i < n; i++)
	{
		cout << "Matricula: " ;
		cin >> vet[i].mat;
		cout << "Notas: " ;
		cin >> vet[i].n1 >> vet[i].n2;
		vet[i].md = (vet[i].n1 + vet[i].n2) / 2;

		if (vet[i].md >= 60 )
		{
			strcpy(vet[i].cond, "Aprovado"); //copia a string na variavel, precisa da biblioteca cstring
		}
		else {
			strcpy(vet[i].cond, "Reprovado");
		} 
	}
	
	// saida
	cout <<"Matricula    Media   Situacao" <<endl;
	for(i=0; i<n; i++){
		cout << vet[i].mat<< "            " << vet[i].md<< "      " << vet[i].cond<<endl;
	}
	return 0;
}
