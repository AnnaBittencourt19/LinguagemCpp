#include <iostream>

using namespace std;

float calc_delta (float a, float b, float c)
{
	double delta;
	if (a != 0)
	{
		delta = (b * b) - 4 * a * c;
	}

	return delta;
}

int main ()
{
	float a, b, c;
	double delta;
	cin >> a >> b >> c;
	if (a!=0){
	delta = calc_delta(a, b, c);
	cout << "Delta = " << delta;
	}
	else {
		cout << "Impossivel calcular, 'a' nao pode ser igual a zero!!! Tente novamente" <<endl;
	}
}
