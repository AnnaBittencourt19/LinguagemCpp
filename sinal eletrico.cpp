// entrada = t
// calculo = x(t) = 1 - fabs(t) (-1 =< t =< 1)
// saida = xt ou 0

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	double t, xt;
	cout << "Digite um valor para t: " << endl;
	cin >> t;
	
	if (t >= -1 && 1 >= t){
		xt = 1 - fabs(t);
		cout << "x(t) = " << xt;
	}
	else {
		cout << "x(t) = 0 " << endl;
	}
	return 0;
}