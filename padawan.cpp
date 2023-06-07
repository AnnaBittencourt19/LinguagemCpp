#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	int n, maiorPonto = 0, pontoss=0;
	double media;
	// struct Padawan
	struct Padawan
	{
		string nome;
		int pontos;
	};
	
	//número de padawans
	cin >> n;
	
	Padawan padawan[100];

	// cadastro de padawans (ENTRADA)
	for(int i = 0; i < n; i++){
		cin.ignore(); 
        getline(cin, padawan[i].nome); 
        cin >> padawan[i].pontos;
	}
	
	//ver qual tem o maior ponto
	
	for(int i = 1; i < n; i++){
		if(padawan[i].pontos > padawan[maiorPonto].pontos){ //compara qual é o maior e armazena em maiorPonto
			maiorPonto = i;
		}
	}
	
	//somar os pontos pra fazer a media
	for(int i = 0; i < n; i++){
        pontoss += padawan[i].pontos; //soma os pontos digitados
    }

	//calcular a media
	media = (pontoss *1.0) / n; 
	
	
	//Saída 
	cout << "Padawan com mais pontos: " << padawan[maiorPonto].nome << endl;
	cout << "Pontos: " << padawan[maiorPonto].pontos << endl;
	cout << "Media da turma: " << media << " pontos";
	
	
	
	
	return 0;
}