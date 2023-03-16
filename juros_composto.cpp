//calculo = M = C * (1 + i) ^ t = M = c* pow((1+(i/100)), t) e lucro = m -c
// entrada = DOUBLE capital inicial (c) e juros (i) e INT tempo de aplicação (T)
// saida = lucro

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double c, i, m, lucro;
	int t;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o valor do capital incial: " <<endl;
	cin >> c;
	
	cout << "Digite o valor da taxa de juros (em % ao mês): " <<endl;
	cin >> i;
	
	cout << "Digite o tempo de aplicação (em meses): " <<endl;
	cin >> t;
	
	cout << fixed << setprecision(2);
	m = c*pow((1+(i/100)), t);
	lucro = m - c;
	cout << "LUCRO = " << lucro ;
	return 0;
}