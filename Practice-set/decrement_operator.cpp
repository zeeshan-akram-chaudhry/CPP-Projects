// decrement opertor
#include<iostream>
using namespace std;
int main()
{
	int x = 2;
	int y = x--; // post decrement
	int z = --x; // pre decrement
	cout << x << endl;
	cout << y << endl;
	cout << z;
	return 0;
}
