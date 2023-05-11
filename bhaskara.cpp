//delta = b^2 - 4ac
// result = -b + Vdelta / 2a
//delta >=0
//a >0

#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main()
{
	double A, B, C, delta, Vdelta, resultado1, resultado2;
	cout << fixed << setprecision(1);
	cin >> A >> B >> C;
	
	delta = pow(B,2) - 4*A*C;
	cout << fixed << setprecision(5);
	if (delta >= 0 && A > 0){
		Vdelta = sqrt(delta);
		resultado1 = (-B + Vdelta) / (2 * A);
		resultado2 = (-B - Vdelta) / (2 * A);
		cout << "R1 = " << resultado1 << endl;
		cout << "R2 = " << resultado2 << endl;
	}
	else {
		cout << "Impossivel calcular" << endl;
	}
	
	return 0;
}