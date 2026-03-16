#include<iostream>
using namespace std;
int main()
{
	int A, B, C;
	cout << "Enter three numbers :";
	cin >> A >> B >> C;
	if(A > B && A > C)
	{
		cout << "Largest number is:" << A; 
	}
	else if(B > A && B > C)
	{
		cout << "Largest number is:" << B; 
	}
	else if(C > A && C > B)
	{
		cout << "Largest number is:" << C; 
	}
	return 0;
}
