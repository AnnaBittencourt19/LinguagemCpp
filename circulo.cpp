#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	double raio, peri, area, pi;
	pi = 3.14;
	cout<< "Digite o raio do círculo:"<<endl;
	cin>>raio;
	peri = 2*pi*raio;
	area = pow(raio,2)*pi;
	
	cout<<"A area do circulo é:" <<area << endl;	
	cout<<"O perimetro do circulo é:" <<peri << endl;
	
	
	return 0;
}