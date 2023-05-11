//entrada = x e y
// condições = x>y (x^2 - y^2 + 2xy)
// x = y ( 2xy + x + y)
// x<y (y^2 + x^2 + 2xy)
// saida = fxy

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int fxy = 0;
	double x,y;
	cout <<fixed << setprecision(1);
	
	cout<< "Digite o valor de x e y: " <<endl;
	cin >> x >> y;
	
	if(x > y){
		fxy = pow(x,2) - pow(y,2) + 2 * x *y;
		cout << "f(x,y) = " << fxy << endl;
	}
	if (x==y){
		fxy = 2*x*y + x + y;
		cout << "f(x,y) = " << fxy << endl;
	}
	if (x<y){
		fxy = pow(y,2) + pow(x,2) + 2 *x*y;
		cout << "f(x,y) = " << fxy << endl;
	}
	
	return 0;
}