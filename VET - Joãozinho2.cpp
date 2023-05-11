//entrada = numero de casos (casos), x, y, op
// realizar a operação determinada por op usando x e y
// saida = x op y = result

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int casos, x[100], y[100];
    char op[100];
    double result[100];

    cin >> casos;
    
    
    for(int i = 0; i < casos; i++)
	{
		cin >> x[i];
	}
	
	for(int i = 0; i < casos; i++)
	{
		cin >> y[i];
	}
	
	for(int i = 0; i < casos; i++)
	{
		cin >> op[i];
	}

    for (int i = 0; i < casos; i++) {
        
    	switch(op[i])
		{
		case '+':
			cout << x[i] << " + " << y[i] << " = " << x[i] + y[i] << endl;
			break;
		
		case '-':
			cout << x[i] << " - " << y[i] << " = " << x[i] - y[i] << endl;
			break;

		case '*':
			cout << x[i] << " * " << y[i] << " = " << x[i] * y[i] << endl;
			break;
		
		case '/':
		    cout <<  fixed << setprecision(2);
			cout << x[i] << " / " << y[i] <<" = " << x[i]*1.0 / y[i]*1.0 << endl;
			break;
		}
    }

    return 0;
}
