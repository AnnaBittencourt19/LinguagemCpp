#include <iostream>
#include <cmath>
using namespace std;

int calc_a (int x){
	int a;
	a = 2 * pow(x,2) + (3 * x) -1;
	return a;
}
int calc_b (int x){
	int b;
	b = pow(x,3);
	return b;
}

int calc_c(int y){
	int c;
	c = pow(y,3);
	return c;
}

int main (){
	int a, b, c, x, y; 
	cin >> x >> y;
	a = calc_a(x);
	b = calc_b(x);
	c = calc_c(y);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x,y;
    cin >> x >> y;
    // a = 2x^2 + 3x - 1; 
    cout << a << endl;
    // b = x^3;
    cout << b << endl;
    // c = y^3;
    cout << c << endl;
    return 0;
}*/
