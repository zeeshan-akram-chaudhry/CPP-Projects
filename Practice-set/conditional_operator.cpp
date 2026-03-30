// Even or odd number using conditional operator

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a num :";
	cin >> num;
	num % 2 == 0? cout << "num is even" : cout << "num is odd";
	return 0; 
}
