#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

template<typename anyType> //anyType could be other var name. 

anyType largest(anyType x, anyType y) {
	if (x > y)
		return x;
	else
		return y;
}

//Declare Prototypes if needed

int main () 
{
	
	int i1 = 3;
	int i2 = 5;
	double d1 = 7.7;
	double d2 = 2.2;
	char c1 = 'a';
	char c2 = 'A';
	string s1 = "good morning";
	string s2 = "good";

	cout << largest(i1, i2) << endl;
	cout << largest(d1, d2) << endl;
	cout << largest(c1, c2) << endl;
	cout << largest(s1, s2) << endl;

	system("pause");
	return 0;
}
