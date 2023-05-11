#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
	double pi = 3.14159;

    double raio;
    cin >> raio;

    double volume = (4.0/3.0) * pi * raio * raio * raio;

    cout << fixed << setprecision(3); 
    cout << "VOLUME = " << volume << endl;

    return 0;
}




