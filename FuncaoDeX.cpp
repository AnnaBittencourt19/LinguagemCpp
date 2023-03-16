//entrada de dados: x
// calculo: f(x) = sqrt(x) / pow(x,3)
// saida de dados = valor de f(x)

#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int main()
{
	double X, FuncaoX;
	cout << "Digite o valor de x:" <<endl;
	cin >> X;
	
	FuncaoX = sqrt(X) / pow(X,3);
	cout << fixed << setprecision(4);
	cout << "A funcao de X eh:" << FuncaoX;
	return 0;
}

