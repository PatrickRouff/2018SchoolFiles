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

int main()
{
	typedef double Double;
	typedef int Integer;

	Integer age = 27;
	Double money = 15.38;

	cout << "\nI am " << age << ". I have $" << money << "\n\n";
	cout << "Divide age by two " << (double)age / 2 << endl;
	system("pause");
	return 0;
}
