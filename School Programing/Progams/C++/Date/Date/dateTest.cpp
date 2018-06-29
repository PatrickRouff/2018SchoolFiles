#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors
#include "date.h"

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

int main()
{
	date d1;

	int im, id, iy;
	cout << "Enter Date in ints followed by spaces (Month, Day, Year)";
	cin >> im >> id >> iy;
	date d2(im, id, iy);

	d1.displayDate1();
	d1.displayDate2();
	d1.displayDate3();
	d2.displayDate1();
	d2.displayDate2();
	d2.displayDate3();

	system("pause");
	return 0;
}
