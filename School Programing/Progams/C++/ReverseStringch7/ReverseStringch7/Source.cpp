#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

string reverse(string);

int main()
{
	string input;

	cout << "Please Enter String:";
	getline(cin, input);
	cout << reverse(input) << endl;

	system("pause");
	return 0;
}

string reverse(string input) {
	int x = input.length();
	string output;
	int i = 1;

	while (i <= x) {
		output += input[(x - i)];
		i++;
	}
	return output;
}