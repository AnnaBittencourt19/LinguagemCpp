#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float num1,num2,media;
	cout<<"Digite dois valores: "<<endl;
	cin>>num1>>num2;
	media = (num1+num2)/2;
	cout<<"A m�dia dos n�meros �: "<< media<< endl;
	return 0;
}