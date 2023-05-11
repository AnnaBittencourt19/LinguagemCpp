//entrada: idade
// saida: maior ou menor de idade
#include <iostream>
using namespace std;
int main(){
	
	int idade;
	cout << "Digite a idade: " <<endl;
	cin >> idade;
	
	if (idade<18){
		cout << "Menor de idade " << endl;
	}
	else {
		cout << "Maior de idade " << endl;
	}
	return 0;
}