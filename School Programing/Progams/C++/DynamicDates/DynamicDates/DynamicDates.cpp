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

//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

int main()
{
	//date *dp1;

	int id, im, iy;
	char i = 'Y';
	int o;
	while (i == 'Y'||i=='y') {
		cout << "Enter month, day, year:";
		cin >> im >> id >> iy;
		date *dp1 = new date(im, id, iy);
		cout << "Which date format (1,2,3) do you want it in:";
		cin >> o;
		if (o == 1) {
			dp1->displayDate1();
		} else if (o == 2) {
			dp1->displayDate2();
		} else if (o == 3) {
			dp1->displayDate3();
		}
		delete dp1;
		dp1 = NULL;
		cout << "Continue(Y/N):";
		cin >> i;
	}

	system("pause");
	return 0;
}
