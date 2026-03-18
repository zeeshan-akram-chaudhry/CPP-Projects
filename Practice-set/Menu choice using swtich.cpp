#include<iostream>
using namespace std;
int main()
{
	int a, b, choice;
	cout << "Enter two numbers : \n";
	cin >> a >> b;
	cout << "Menu : \n";
	cout << "1. Addition : \n";
	cout << "2. Subtraction : \n";
	cout << "3. Multiplication : \n";
	cout << "4. Division : \n";
	cout << "Enter Choice: \n";
	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "Sum = " << a + b;
			break;
		case 2:
			cout << "Subtract = " << a - b;
			break;
		case 3:
			cout << "Product = " << a * b;
			break;
		case 4:
			if(b != 0)
				cout << "Division = " << a / b;
			else
				cout << "Division by zero is not possible.";
			break;
		default:
			cout << "Invalid Choice";	
	}
	return 0;
}
