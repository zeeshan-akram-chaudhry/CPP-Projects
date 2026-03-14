#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a ;
	double b ;
	cout << "Enter Base and Exponent :";
	cin >> a >> b;
	double power = pow(a , b);
	cout << power;
	return 0;
}
