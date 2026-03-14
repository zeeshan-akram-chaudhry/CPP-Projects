#include<iostream>
using namespace std;
int main()
{
	double length1, width1;
	double length2, width2;
	cout << "Enter length and width of first rectangle :";
	cin >> length1 >> width1;
	cout << "Enter length and width of second rectangle :";
	cin >> length2 >> width2;
	double area1 = length1 * width1;
	cout << "Area of first rectangle = " << area1 <<endl;
	double area2 = length2 * width2;
	cout << "Area of second rectangle = " << area2 <<endl;
	if( area1 > area2)
	{
		cout << "First rectangle has greater area";
	}
	else if( area1 < area2)
	{
		cout << "Second rectangle has greater area";
	}
	else
	{
		cout << "Both rectangles have same area";
	}
	return 0;
}
