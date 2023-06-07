#include <iostream>

using namespace std;

int sinal (int n){
	if (n > 0){
		cout << "Positivo";
	}
	else if (n < 0){
		cout << "Negativo";
	}
	else {
		cout << "Zero";
	}
	return 0;
}

int main (){
	int n;
	int sina;
	cin >> n;
	sina = sinal(n);
	
}