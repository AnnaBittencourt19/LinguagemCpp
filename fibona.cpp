// entrada = N
// ser� usado for 
//saida =  sequencia fibonacci

#include <iostream>
using namespace std;

int main() {
    int num, anterior = 0, atual = 1, proximo;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite o n�mero de termos da sequ�ncia de Fibonacci: ";
    cin >> num;
    
    
    // Loop for para gerar os termos da sequ�ncia:
    for (int i = 1; i <= num; i++) { // no for o do meio � a condi��o para continuar executando, ent�o enquanto i <= num o for ser� executado
        cout << anterior << " "; // Imprime o termo atual
        
        proximo = anterior + atual; // Calcula o pr�ximo termo
        anterior = atual; // Atualiza o termo anterior para o atual
        atual = proximo; // Atualiza o termo atual para o pr�ximo
    }
    
    return 0;
}
