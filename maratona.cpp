//entrada = quantos participantes (while n<=1 || n >=400)
//nome string [20], idade(while idade <= 16 || idade >=30) linguagem (c, j ou P) (while linguagem != C || linguagem != J || linguagem != P)
// calculo de percentual 

#include<iostream>

using namespace std;

int main()
{
	int participantes, idade, i, c=0, p=0,j=0; // sempre colocar igual a zero pra evitar erros
	char nome[21], linguagem;
	double pp, pc,pj, mediaIdade;
	
	cout << "Quantos participantes deseja cadastrar(entre 1 a 400)? " << endl;
	cin>> participantes;
	while (participantes <1 || participantes >400){ // se o numero de participantes for maior que 1 ou menor que 400 o código segue 
													// normal mas se o numero de participantes fazer parte da condição while, será pedido o numero de novo
		cout << "Quantos participantes deseja cadastrar(entre 1 a 400)? " <<endl;
	   	cin>>participantes;
	}
	
	for (i=1; i<= participantes; i++ ){ // esse for vai executar as perguntas até dar o número de partipantes
		cout << "Nome:" <<endl;
		cin.ignore( ); // por ser char com mais caracter e após um int tem que ter cin.ignore
		cin.getline(nome,21);// pegar o char para armazenar
		
		cout << "Idade(>=16 e <=30): " <<endl;
		cin >> idade;
		while (idade < 16 || idade > 30){ // mesmo caso de participantes
			cout << "Idade(>=16 e <=30): " <<endl;
			cin >> idade;
		}
		mediaIdade = mediaIdade + idade; // aqui vai fazer as somas das idades para fazer a média depois
		cout << "Linguagem (C, J ou P): " <<endl; 
		cin >> linguagem;
		
		while (linguagem != 'C' && linguagem != 'J' && linguagem != 'P'){ // Aqui é && 
			cout << "Linguagem (C, J ou P): " <<endl;
			cin >> linguagem;
		}
		if ( linguagem == 'C'){
			c++; //soma mais um toda vez que C for escolhido
		}
		if (linguagem == 'P'){
			p++;
		}
		if (linguagem == 'J'){
			j++;
		}
		
	}
		pp = (p*1.0/participantes) * 100; // esse *1.0 é pra conseguir ter um resultado em decimal apartir de int
		pc = (c*1.0/participantes) * 100;
		pj = (j*1.0/participantes) * 100;
		
		cout << "Inscritos em C/C++: "<< pc << "%" <<endl ;
		cout << "Inscritos em Java: "<< pj << "%" <<endl;
		cout << "Inscritos em Python: "<< pp << "%" <<endl;
		
		mediaIdade = mediaIdade/participantes;
		cout << "Média de idade dos participantes: "<< mediaIdade;
	return 0;
}