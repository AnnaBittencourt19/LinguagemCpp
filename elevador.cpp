#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int L, C, R1, R2;
    cin >> L >> C >> R1 >> R2;

    int diagonal = sqrt(L*L + C*C); 
    if (diagonal >= R1 + R2 && L >= 2*R1 && L >= 2*R2 && C >= 2*R1 && C >= 2*R2) {
        cout << "S " <<endl; 
    } else {
        cout << "N" <<endl; 
    }

    return 0;
}