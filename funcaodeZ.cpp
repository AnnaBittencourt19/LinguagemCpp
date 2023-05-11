// entrada x e y
// calculo = Vx-y / Vx+y  (x+y >=0)
// saida = z ou calculo impossivel

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int x, y;
	double z;
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite o valor de x e y: " << endl;
	cin >> x >> y;
	
	
	if (x >= y){
		cout << fixed << setprecision(3);
		z = (sqrt(x-y)) / (sqrt(x+y));
		cout << "z(x,y) = " << z;
	}
	else {
		cout << "Cálculo impossível" << endl;
	}
	return 0;
}
