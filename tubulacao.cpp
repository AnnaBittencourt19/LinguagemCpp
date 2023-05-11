//entrada= raio(r) e comprimento do cano(h)(em metro mas a conta é em metro quadrado)
// calculo = 2 * pi * r * h
//pi = 3.14159
// saida = resultado do calculo
// varia de 30 em 30 de 1,20 até 2,30
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    double pi, r, h, calculo, converte, i, total;
    pi = 3.14159;
    cout << fixed << setprecision(2);
    
    cout << "Digite o valor do raio:" << endl;
    cin >> r;
    
    cout << "Digite o comprimento do cano:" <<endl;
    cin >> h;
    
    
    for (i = 1.20 ; i < 2.30; i = i + 0.30){
        calculo = 2 * pi * r * h;
        total = calculo * i;
        cout << total  << endl;
    }
    
    
    
}