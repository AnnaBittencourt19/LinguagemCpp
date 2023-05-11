//entrada = n1, n2, n3, n4 ,5 , n6 (int)
// contar positivos (for?)
// saida = quantos números positivos

#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, n3, n4, n5, i = 0;
	
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	
	if (n1%2 == 0){
		i = i+1;
	}
	if (n2%2 == 0){
		i = i+1;
	}
	if (n3%2 == 0){
		i = i+1;
	}
	if (n4%2 == 0){
		i = i+1;
	}
	if (n5%2 == 0){
		i = i+1;
	}
	cout << i << " valores pares" <<endl;

	return 0;
}