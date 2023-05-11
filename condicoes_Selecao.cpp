// entrada = A , B, C , D
// condições = 
/*se B for maior do que C e 
se D for maior do que A, 
e a soma de C com D for maior que a soma de A e B 
e se C e D, ambos, forem positivos e
 se a variável A for par escrever a mensagem "Valores aceitos"*/

#include <iostream>

using namespace std;

int main()
{
	int A, B , C, D, somaCD, somaAB, apar;
	cin >> A >> B >> C >> D;
	somaCD = C +D;
	somaAB = A + B;
	apar = A % 2;
	
	if(B > C && D > A && somaCD > somaAB && C > 0 && D >0 && apar==0){
		cout << "Valores aceitos" << endl;
	}
	else {
		cout << " Valores nao aceitos" << endl;
	}
	return 0;
}