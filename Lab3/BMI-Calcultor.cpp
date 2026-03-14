/***********************************
	Lab: 06
	Task: 01
	Developer:
		Roll #: F25BBITAB015
		Name: Zeeshan Akram Chaudhry
***********************************/

#include<iostream>
using namespace std;
int main()
{
	double weight, height;
	cout << "Enter weight in pounds :";
	cin >> weight;
	cout << "Enter height in inches :";
	cin >> height;
	double BMI = weight * 703/ (height * height);
	cout << "BMI = " << BMI <<endl;
	if( BMI >= 18.5 && BMI <= 25)
	{
		cout << "Optimal Weight";
	}
	else if( BMI < 18.5)
	{
		cout << "Under Weight";
	}
	else
	{
		cout << "Over Weight";
	}
	return 0;
}
