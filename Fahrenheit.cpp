#include <iostream>
using namespace std;
int main()
{
	float c, f;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite a temperatura em graus cent�grados: " << endl;
	cin>> c;
	f = (9* c + 160)/5;
	cout<<"O valor da temperatura em Fahrenheit �: " << f << endl;
	return 0;
}