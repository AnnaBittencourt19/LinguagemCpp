#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A < B) swap(A, B); // se A for menor que B trocar A por B
    if (A < C) swap(A, C); // se A for menor que C trocar A por C
    if (B < C) swap(B, C); // Se B for menor que C trocar B por C

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO\n";
    } else {
        if (A*A == B*B + C*C) {
            cout << "TRIANGULO RETANGULO\n";
        }
        if (A*A > B*B + C*C) {
            cout << "TRIANGULO OBTUSANGULO\n";
        }
        if (A*A < B*B + C*C) {
            cout << "TRIANGULO ACUTANGULO\n";
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO\n";
        } else if (A == B || B == C) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}
