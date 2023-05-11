//entrada = idade, n
// condição = idade <18
// saida =

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, idade, i, maior =0, menor =0;
	double maioor=0, menoor=0;
	cout << "Digite a quantidade de pessoas: " << endl;
	cin >> n;
	
	for (i= 1; i <= n; i= i +1){
		cout << "Digite a idade: " << endl;
		cin >> idade;
		
		if ( idade>=21){
			maior = maior +1;
		}
		else
		{
			menor = menor +1;
		}
		
	}
	maioor = (maior/n)*100;
	menoor = (menor/n)*100;
	
	cout << maior;
	cout << fixed << setprecision(2);
	cout << maioor;
	cout 
	cout << menor;
	cout << menoor;
	
	
	
	
	

	
	return 0;
}