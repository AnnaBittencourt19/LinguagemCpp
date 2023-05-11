// entrada= renda
// condição = renda >= 0 && renda <=2000 (isento)
// renda >2000 && renda <=3000 8%
// renda > 3000 && renda <= 4500 18%
// renda >4500 28%

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	double renda, imposto;
	cout << fixed<< setprecision(2);
	cin >>renda;
	
	if(renda >= 0 && renda <=2000){
		cout << "Isento" <<endl;
	}
	if(renda >2000 && renda <=3000){
		imposto = renda * 8/100;
		cout << "R$ " << imposto << endl;
	}
	
	
	
	
	return 0;
}