#include<iostream>
using namespace std;
int main()
{
	string name;
	int age;
	string city;
	string college_name;
	string profession;
	string animal;
	string pet_name;
	cout << "Enter Your name :" <<endl;
	getline(cin, name);
	cout << "Enter Your age :" <<endl;
	cin >> age;
	cin.ignore();
	cout << "Enter Your city :" <<endl;
	getline(cin, city);
	cout << "Enter Your college_name :" <<endl;
	getline(cin, college_name);
	cout << "Enter Your profession :" <<endl;
	getline(cin, profession);
	cout << "Enter Your type of animal :" <<endl;
	getline(cin, animal);
	cout << "Enter Your pet_name :" <<endl;
	getline(cin, pet_name);
	
	cout <<"There once was a person named "<< name <<" who lived in "<<city<<". At the age of"<< age << name<<" went to college at "<< college_name<<"."<< name <<"graduated and went to work as a"<< profession<<".Then,"<< name <<"adopted a(n)"<< animal <<"named" <<pet_name
<<".They both lived happily ever after!";
}
