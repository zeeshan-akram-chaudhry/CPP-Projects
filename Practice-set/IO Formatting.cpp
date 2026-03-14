#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a = 25, b = 266, c = 4555;
	int d = 345672, e = 38988, f = 339876;
	int g = 3455672, h = 3558988, i = 34439876;
	cout << a <<" " << b <<" " << c <<endl;
	cout << d <<" " << e <<" " << f <<endl;
	cout << g <<" " << h <<" " << i <<endl;
	
	cout << "\n\n";
	
	
	cout << left << setw(8) << a << setw(8) << b << setw(8) << c <<endl;
	cout << right << setw(8) << d << setw(8) << e << setw(8) << f <<endl;
	cout << left << setw(8) << g << setw(8) << h << setw(8) << i <<endl;
	return 0;
}
