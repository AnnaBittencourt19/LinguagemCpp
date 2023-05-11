// entrada = num1, num2, op
// opções: a= adicao, s= subtração, m = multiplicação, d= divisão, p= potenciação
// saida = resultado da operação ou erro

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	char op;
	double num1, num2, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << " Digite qual operação você deseja realizar: \n a - adição \n s - subtração \n m - multiplicação \n d- divisão \n p- potenciação"<<endl;
	cin >> op;
	
	cout << "Digite os números:" << endl;
	cin >> num1 >> num2;
	
	cout << "--------------------------------------" <<endl;
	switch (op){
		case 'a': 
		resultado = num1 + num2;
		cout << "O resultado da adição é: "<< resultado <<endl;
		break;
		
		case 's':
		resultado = num1 - num2;
		cout << "O resultado da subtração é: "<< resultado <<endl;
		break;	
	
		case 'm':
		resultado = num1 * num2;
		cout << "O resultado da multiplicação é: "<< resultado <<endl;
		break;	
	
		case 'd':
		if(num2==0)	{
			cout << "Cálculo impossível" << endl;
		}
		else {
			resultado = num1 / num2;
			cout << "O resultado da divisão é: "<< resultado <<endl;
		}
		
		
		break;	
	
		case 'p':
		resultado = pow(num1,num2);
		cout << "O resultado da potenciação é: "<< resultado <<endl;
		break;	
		
		default: 
		cout << "Opção invalida" << endl;	
	}
	return 0;
}