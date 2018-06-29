/*
Working with output and escape sequences

*/

#include <iostream> //Input/Output stream

//single line comment

using namespace std;

int main() {
	// 2 diff. ways to skip to next line

	cout<<"Hello World"<<endl;

	cout<<"Hello World"<<"\n";

	cout<<"Now let's tab\t out"<<endl;

	// Some characters need backward slash in front to print them. 
	//Escape Sequences

	cout<<"Forward slash / doesn't need escape"<<endl;
	cout<<"Backward slash \\ does need escape"<<endl;

	cout<<"You need escape for double quote \" to work"<<endl;
	cout<<"You need escape for single quote \' to work"<<endl;
	return 0;
}