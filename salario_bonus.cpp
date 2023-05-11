#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    string nome_vendedor;
    double salario_fixo, total_vendas;

    cin >> nome_vendedor;
    cin >> salario_fixo >> total_vendas;

    double total_receber = salario_fixo + (total_vendas * 0.15);

    cout << fixed << setprecision(2); 
    cout << "TOTAL = R$ " << total_receber << endl;

    return 0;
}




