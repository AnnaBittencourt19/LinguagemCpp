//entrada = numero inteiro
// for i--
// calculo = fatorial = fatorial *i
//saida = fatorial

#include<iostream>
using namespace std;

int main (){
    int num, fatorial =1 ,i;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite um n�mero: " << endl;
    cin >> num;
    i=num;
    
    if (num <0) {
		cout << "Calculo imposs�vel" << endl;
	}
	if (num >0){
    for (i=1; i <= num ; i++){
        fatorial *= i;
    }
    
    cout << "O fatorial de " << num << " � "<<fatorial << endl;
	}   
}