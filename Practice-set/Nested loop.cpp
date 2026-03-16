#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number :";
	cin >> num;
	if(num >= 0)
	{
		if(num % 2 == 0)
		{
			cout <<"Number is positive and even.";
		}
		else
		{
			cout <<"Number is positive and odd.";
		}
	}
	else
	{
		cout << "Number is negative.";
	}
	return 0;
}
