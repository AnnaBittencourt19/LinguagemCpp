//entrada: x 
//calculo: f(x) = 1/x
//saida: f(x) ou erro

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x, fx;
	cout << fixed << setprecision(4);
	cout << "Digite o valor de x: " <<endl;
	cin >> x;
	fx= 1/x;
	
	if (x==0){
		cout << "Erro! Calculo impossivel" << endl;
	}
	else {
		cout << fx;
	}
	return 0;
}