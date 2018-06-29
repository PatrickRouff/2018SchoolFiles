#include <iostream>
#include <sstream> //stringstream

using namespace std;

int main()
{
	string name = "Beth";
	int age = 22;
	stringstream ss; //declare a stringstream variable
	ss << age; //adds age to stringstream
	string sentence = name + " is " + ss.str() + " years old.";
	cout << sentence << endl;

	return 0;
}