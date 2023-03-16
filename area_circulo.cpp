#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	double raio, valor_da_area, pi;
	pi = 3.14159;
	cout<< "Digite o raio do círculo:"<<endl;
	cin>>raio;
	valor_da_area = pow(raio,2)*pi;
	cout << fixed << setprecision(3); 
	cout<<"AREA = "<<valor_da_area << endl;	
	
	
	return 0;
}