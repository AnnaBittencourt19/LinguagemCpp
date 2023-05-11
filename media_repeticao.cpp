// entrada = n e num
// calculo = media = (num + media)/2
// saida = media

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n, num, i;
	double media =0;
	setlocale(LC_ALL,"Portuguese");
	cout << "Digite a quantidade de números: " <<  endl;
	cin >> n;
	cout << fixed <<  setprecision(2);
	for (i=1; i <= n; i = i+1){
		cout << "Digite os números: " <<endl;
		cin >> num;
		media = num + media;
		
	}
		media= media/n; //fica fora do for
	cout << media;
	return 0;
}