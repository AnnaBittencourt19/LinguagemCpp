// entrada x e numero de termos (n)
// calculo = x + x elevado ao numero de termos(x^2) / fatorial de numero de termos (n!)
// saida = calculo
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double x, n,i, fatorialN=1, aoqua=1, calculo = 0;
    
    cout << "Quantos termos ?(1 a 100)" << endl;
    cin >> n;
    
    cout << "Digite o valor de x:" <<endl;
    cin >> x;
    
    for (i=1; i <= n ; i++){
        fatorialN *= i;
        aoqua = pow (x,i);
        calculo = x + (aoqua/ fatorialN);
    }
    
    cout << calculo; 
    
    
    return 0;
}