// entrada = numero
// calculo e for = num * i; for até 10, 
// saida = tabuada 

#include <iostream>

using namespace std;

int main()
{
	int num, i;
	setlocale (LC_ALL, "Portuguese");
	
	cout << "Digite o número: " << endl;
	cin >> num;
	cout << "TABUADA DE " << num << endl;
	
	for (i=1; i <= 10; i++){ 
        cout << num << " x " << i << " = " << i*num << endl;
	}
	return 0;
}