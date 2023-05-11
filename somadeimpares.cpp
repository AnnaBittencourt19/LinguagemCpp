#include <iostream>

using namespace std;

int main() {
    int x, y, sum = 0;

    cin >> x >> y;

    // Caso x seja maior que y, fazemos a troca
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Percorremos de x+1 até y-1
    for (int i = x + 1; i < y; i++) {
        // Se o número é ímpar, adicionamos na soma
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
