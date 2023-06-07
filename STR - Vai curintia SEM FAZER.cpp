#include <iostream>
#include <string>
using namespace std;

int main() {
	string nome[100];
    int n, idade[100]; //nome e idade tem que ser vetor por causa do for 
    cin >> n;

	//entrada de dados
    for (int i = 0; i < n; i++) {

        cin.ignore(); 
        getline(cin, nome[i]); 

        cin >> idade[i]; 
    }
    
    //verificação de maioridade 
	for (int i = 0; i < n; i++) {
        if (idade[i] >= 18) {
            cout << nome[i] << " " << idade[i] << endl; 
        }
    }
    return 0;
}
