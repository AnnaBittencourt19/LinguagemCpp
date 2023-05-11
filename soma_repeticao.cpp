// entrada : n, num
// saída : soma

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, num, soma =0, i;
	cout << "Digite a quantidade de números: " <<  endl;
	cin >> n;
	
	for (i=1; i <= n; i = i+1){
		cout << "Digite os números: " <<endl;
		cin >> num;
		soma = soma + num;
	}
	cout << "A soma é:" << soma;
	
	return 0;
}