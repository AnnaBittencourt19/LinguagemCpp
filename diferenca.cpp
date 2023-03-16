// entrada = A, B, C , D
// calculo = DIFERENCA = (A * B - C * D)
// saida = DIFERENCA = 
#include <iostream>
using namespace std;
int main()
{
	int A, B, C, D, DIFERENCA;
	cin >> A >> B >> C >> D;
	DIFERENCA = (A * B - C * D);
	cout << "DIFERENCA = " << DIFERENCA << endl;
	return 0;
}