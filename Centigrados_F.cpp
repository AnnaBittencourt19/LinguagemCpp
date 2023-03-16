//entrada de dados:  Graus centígrados
// calculo: F = (9*C + 160)/5
//saida de dados: valor em F

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	double C,F;
	cout << "Digite o valor da temperatura em graus centigrados:" <<endl;
	cin >> C;
	F = (9*C +160)/5;
	cout << fixed << setprecision(1); 
	cout << "O valor do graus em F eh:" << F <<endl;
	return 0;
}