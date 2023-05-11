// entrada = num1, num2, op
// op��es: a= adicao, s= subtra��o, m = multiplica��o, d= divis�o, p= potencia��o
// saida = resultado da opera��o ou erro

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	char op;
	double num1, num2, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite qual opera��o voc� deseja realizar: \n a - adi��o \n s - subtra��o \n m - multiplica��o \n d- divis�o \n p- potencia��o"<<endl;
	cin >> op;
	
	cout << "Digite os n�meros:" << endl;
	cin >> num1 >> num2;
	
	cout << "--------------------------------------" <<endl;
	switch (op){
		case 'a': 
		resultado = num1 + num2;
		cout << "O resultado da adi��o �: "<< resultado <<endl;
		break;
		
		case 's':
		resultado = num1 - num2;
		cout << "O resultado da subtra��o �: "<< resultado <<endl;
		break;	
	
		case 'm':
		resultado = num1 * num2;
		cout << "O resultado da multiplica��o �: "<< resultado <<endl;
		break;	
	
		case 'd':
		if(num2==0)	{
			cout << "C�lculo imposs�vel" << endl;
		}
		else {
			resultado = num1 / num2;
			cout << "O resultado da divis�o �: "<< resultado <<endl;
		}
		
		
		break;	
	
		case 'p':
		resultado = pow(num1,num2);
		cout << "O resultado da potencia��o �: "<< resultado <<endl;
		break;	
		
		default: 
		cout << "Op��o invalida" << endl;	
	}
	return 0;
}