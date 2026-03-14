#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num = 10;
	int den = 3;
	double result = static_cast<double> (num)/ den;
	cout << result <<endl;
	cout << setprecision(5) << result <<endl;
	cout << setprecision(4) << result <<endl;
	cout << setprecision(3) << result <<endl;
	cout << setprecision(2) << result <<endl;	
	cout << setprecision(1) << result <<endl;
	cout << setprecision(0) << result <<endl;
	return 0;
	
}
