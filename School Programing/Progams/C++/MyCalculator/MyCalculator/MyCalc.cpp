#include <iostream>
#include <string>
using namespace std;

int main() {
	//delacring vars

	string fName;
	int num1, num2;
	int sum, product, mod;
	double quotient;

	cout<<"Enter first name:"<<endl;
	cin>>fName;
	//cout<<fName;

	cout<<"Enter an integer:"<<endl;
	cin>>num1;
	//cout<<num1;

	cout<<"Enter a second integer:"<<endl;
	cin>>num2;
	//cout<<num2;

	cout<<"Hello, "<<fName<<endl;

	sum = num1 + num2;
	cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

	product = num1 * num2;
	cout<<num1<<" * "<<num2<<" = "<<product<<endl;

	mod = num1 % num2;
	cout<<num1<<" Mod "<<num2<<" = "<<mod<<endl;

	quotient = num1 / num2;
	cout<<num1<<" / "<<num2<<" = "<<quotient<<endl;

	return 0;
}