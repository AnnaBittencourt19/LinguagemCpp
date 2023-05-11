// entrada = N
// será usado for 
//saida =  sequencia fibonacci

#include <iostream>
using namespace std;

int main() {
    int num, anterior = 0, atual = 1, proximo;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite o número de termos da sequência de Fibonacci: ";
    cin >> num;
    
    
    // Loop for para gerar os termos da sequência:
    for (int i = 1; i <= num; i++) { // no for o do meio é a condição para continuar executando, então enquanto i <= num o for será executado
        cout << anterior << " "; // Imprime o termo atual
        
        proximo = anterior + atual; // Calcula o próximo termo
        anterior = atual; // Atualiza o termo anterior para o atual
        atual = proximo; // Atualiza o termo atual para o próximo
    }
    
    return 0;
}
