#include <iostream>

using namespace std;

int main()
{
    int matriz[10][10];
    int n;

    cout << "Entre com a ordem da matriz (1 a 10): ";
    cin >> n;

    // entrada
    cout << "Digite os elementos, linha a linha, separados por espaco..." << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    // somar as colunas
    int somaColunas[10] = {0}; // esse 0 está entre chaves para deixar o valor do array zerado
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            somaColunas[j] += matriz[i][j]; // o j faz o programa percorrer apenas as colunas
        }
    }

    // saida
    cout << "Soma das colunas:" << endl;
    for (int j = 0; j < n; j++) {
        cout << "Soma da coluna " << j << " = " << somaColunas[j] << endl;
    }

    return 0;
}
