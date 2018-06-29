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

int main() {
	int input = 0;
	int even = 0;
	int odd = 0;
	int i = 0;

	cout << "Please enter 20 Integers:" << endl;

	do {
		cin >> input;
		if ((input % 2) == 0) {
			even += input;
		} else {
			odd += input;
		}
		i++;
	} while (i<20);
	
	cout << endl;
	cout << "Even sum: " << even << endl;
	cout << "Odd sum: " << odd << endl;

	system("pause");
	return 0;
}
