// entrada = tipo_automovel, custo_dia
// switch e if (??)
// saida = Custo final

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int tipo_automovel, dias;
	double custo_final, calculo;
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);
	
	cout << "Digite o tipo de automóvel: \n 1 - Custo dia R$50.00 \n 2 - Custo dia R$100.00 \n 3 - Custo dia R$150.00" << endl;
	
	cin >> tipo_automovel;
	
	cout << "Digite o nº de dias de locação: " << endl;
	cin >> dias;
	
	switch(tipo_automovel)
	{
	case 1:
		if (dias<7){
			calculo = dias * 50;
			cout << "Custo final: " << calculo << endl;
		}
		if (dias >= 7  dias < 15){
			calculo = dias * 50 - (dias * 50) *0.05;
			cout << "Custo final: " << calculo << endl;
		}
		else{
			calculo = dias * 50 - (dias * 50) *0.10;
			cout << "Custo final: " << calculo << endl;
		}
		break;
    case 2:
    	if (dias<7){
			calculo = dias * 100;
			cout << "Custo final: " << calculo << endl;
		}
		if (dias >= 7 && dias < 15){
			calculo = dias * 100 - (dias * 100) *0.05;
			cout << "Custo final: " << calculo << endl;
		}
		else{
			calculo = dias * 100 - (dias * 100) *0.10;
			cout << "Custo final: " << calculo << endl;
		}
		break;
	default:
		break;
	} 
	return 0;
}