#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors

//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

int main () 
{
	double d1;
	double d2;
	double *p1;

	p1 = &d1;
	*p1 = 1.25;

	p1 = &d2;
	*p1 = 2.5;

	cout << d1 << endl;
	cout << *p1 << endl;

	p1 = NULL;

	system("pause");
	return 0;
}
