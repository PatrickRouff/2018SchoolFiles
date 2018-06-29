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
int *allocate(int);


int main()
{
	int input;
	cout << "Enter Array Size to Gen: ";
	cin >> input;
	int *p1;
	p1 = allocate(input);

	system("pause");
	return 0;
}

 int *allocate(int input) {
	 int *p2 = new int[input];
	 if ((p2 != NULL)) {
		 return p2;
	 } else {
		 return NULL;
	 }
}
