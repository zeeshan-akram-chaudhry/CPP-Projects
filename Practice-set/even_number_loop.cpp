// count even number using loop
#include<iostream>
using namespace std;
int main()
{
	int x = 1;
	int num;
	int count = 0;
	while(x <= 5)
	{
		cout << "Enter a number :" <<endl;
		cin >> num;
		if(num % 2 == 0)
		{
			count = count + 1;
		}
		x++;
	}
	cout << "Even numbers are :" << count;
	return 0;
}
