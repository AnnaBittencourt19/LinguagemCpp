// entrada = A, B, C
/* calculos = area_triangulo = (A*C) /2(base*altura/2)
   area_circulo = pow (C,2) * 3.14159 (pi * raio^2)
   area_trapezio = (A+B)*c/2
   area_quadrado = pow(B,2)
   area_retangulo = a*b
*/
// saida = area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
	cout << "Digite o valor de A, B e C: " << endl;
	cin >> a >> b >> c;
	cout << fixed << setprecision(3);
	cout << "-------------------------------------" << endl;
	
	area_triangulo = (a*c)/2;
	cout << "TRIANGULO: " << area_triangulo << endl;
	
	area_circulo = 3.14159 * pow(c,2);
	cout << "CIRCULO: " << area_circulo << endl;
	
	area_trapezio = (a+b)*c/2;
	cout << "TRAPEZIO: " << area_trapezio << endl;
	
	area_quadrado = pow(b,2);
	cout << "QUADRADO: " << area_quadrado <<endl;
	
	area_retangulo = a*b;
	cout << "RETANGULO: " << area_retangulo << endl;
	
	return 0;
}
   