//entrada = codigo e quantidade
// switch = 1, 2, 3 , 4,5 
// saida =total

#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	int codigo, quantidade;
	double total;
	
	cin >> codigo;
	cin >> quantidade;
	cout << fixed << setprecision(2);
	
	switch(codigo)
	{
	case 1:
		total = quantidade * 4;
		cout << "Total: R$ " << total <<endl;
		break;
	
	case 2:
		total = quantidade * 4.50;
		cout << "Total: R$ " << total <<endl;
		break;
	
	case 3:
		total = quantidade * 5;
		cout << "Total: R$ " << total <<endl;
		break;
	
	case 4:
		total = quantidade * 2;
		cout << "Total: R$ " << total << endl;
		break;
	
	case 5:
		total = quantidade * 1.5;
		cout << "Total: R$ " << total <<endl;
		break;
	default:
		break;
	}
	return 0;
}