// entrada = PV1, PV2, EP
// calculo = MF = (PV1+PV2)/2*0.9 + EP*0.1
// saida = MF

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double PV1, PV2, EP, MF;
	cout << "Digite a nota na prova 1 e na prova 2: " << endl;
	cin >> PV1 >> PV2;
	
	cout << "Digite a média dos exercicios propostos:" << endl;
	cin >> EP;
	
	MF = (PV1+PV2)/2*0.9 + EP*0.1;
	
	cout << fixed << setprecision(1);
	cout << "A média final do aluno é: "<< MF;
	
	
	return 0;
}