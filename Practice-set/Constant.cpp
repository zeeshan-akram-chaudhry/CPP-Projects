#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const double PI = 3.17;
	double radi;
	cout << "Enter radius of a circle :";
	cin >> radi;
	double area = 2 * PI * radi * radi;
	cout << "Area of circle = " << area;
	return 0;
}
