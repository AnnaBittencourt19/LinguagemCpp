// entrada = horas, velociadade media
// calculo = distancia percorrida e depois ela dividida pelo 12km/l
// saida = quantidade_combustivel

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int horas, velocidade_media;
	double distancia, quantidade_combustivel;
	
	cin >> horas;
	cin >> velocidade_media;
	
	cout << fixed << setprecision(3);
	distancia = velocidade_media * horas;
	quantidade_combustivel = distancia / 12;
	
	cout << quantidade_combustivel << endl;
	
	return 0;
}