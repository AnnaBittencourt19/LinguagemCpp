//entrada = a, b ,c
// swap com o if = ordem decrescente (IMPORTANTE)
//if pra checar ordem, ver se forma triangulo ou o tipo do traingulo

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a < b) {
        swap(a, b);
    }
    if (a < c) {
        swap(a, c);
    }
    if (b < c) {
        swap(b, c);
    }

    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (a*a == b*b + c*c) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (a*a > b*b + c*c) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (a*a < b*b + c*c) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
