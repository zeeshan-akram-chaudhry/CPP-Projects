/***********************************
	Lab: 06
	Task: 03
	Developer:
		Roll #: F25BBITAB015
		Name: Zeeshan Akram Chaudhry
***********************************/

#include<iostream>
using namespace std;
int main()
{
	int second;
	cout << "Enter number of seconds :";
	cin >> second;
	if(second >= 86400)
	{
		int days = second / 86400;
		cout << "days = " <<days <<endl;
	}
	if(second >= 3600)
	{
		int hour = second / 3600;
		cout << "hours = " <<hour <<endl;
	}
	if(second >= 60)
	{
		int minute = second / 60;
		cout << "minutes = " <<minute <<endl;
	}
	return 0;
}
