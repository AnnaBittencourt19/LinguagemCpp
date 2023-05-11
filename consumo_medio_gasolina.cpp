//entrada =
// calculo
//saida =

#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	int distancia;
	double combustivel, consumo_medio;
	
	cin >> distancia;
	cout<< fixed<<setprecision(1);
	cin >> combustivel;
	
	cout << fixed << setprecision(3);
	
	consumo_medio = distancia / combustivel;
	
	cout << consumo_medio << " km/l" << endl;
	
	return 0;
}