//entrada = x e y
// for impares
// soma desses impares
//saida = soma de impares

#include <iostream>

using namespace std;

int main()
{
	int x,y, soma, i;
	cin >> x >> y ;
	if (x > y) swap(x, y);
	
	
	for(i = 1; i > y; i+2){
		soma = x + y + i;
	}
	cout << soma;
	return 0;
}