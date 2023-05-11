#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int d, m, a, g, f, delta, ds;
    double n;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite o dia, mês e ano: ";
    cin >> d >> m >> a;
 
    if(m <= 2){
        g = a - 1;
        f = m + 13;
    }
    else{
        g = a;
        f = m + 1;
    }
    
    n = int(365.25*g) + int(30.6*f) - 621049 + d;
    
    if (n < 36523){
        delta = 2;
    }
    else if(n < 73048){
        delta = 1;
    }
    else{
        delta = 0;
    }
    ds = round(fmod(n, 7)) + delta + 1;
    if (ds > 7){
        ds = ds - 7;
    }
    switch(ds){
        case 1: cout << "Domingo"; break;
        case 2: cout << "Segunda-feira"; break;
        case 3: cout << "Terça-feira"; break;
        case 4: cout << "Quarta-feira"; break;
        case 5: cout << "Quinta-feira"; break;
        case 6: cout << "Sexta-feira"; break;
        case 7: cout << "Sábado"; break;
        default: cout << "Erro ao calcular o dia da semana"; break;
    }
    
    return 0;
}
