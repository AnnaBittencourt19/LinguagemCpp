#include <iostream>

using namespace std;

float ideal (float h, char sexo){
	double ideal;
	if (sexo == 'M'){
		ideal = 72.7 * h - 58;
	}
	else if (sexo == 'F'){
		ideal = 62.1 * h - 44.7;
	}
	return ideal;
}

int main (){
	float h; 
	char sexo;
	double ide;
	cin >> h >> sexo;
	ide = ideal(h,sexo);
	cout << "Peso ideal = " << ide << " Kg";
}