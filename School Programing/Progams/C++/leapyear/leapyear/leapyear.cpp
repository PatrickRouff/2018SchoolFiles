#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

int main()
{
	int year;
	bool leap;
	cout << "What is the current year:";
	cin >> year;
	cout << endl;

	if ((year % 4) == 0) {
		if ((year % 100) == 0) {
			if ((year % 400) == 0) {
				leap = 1;
			} else { 
				leap = 0;
			}
		} else {
			leap = 1;
		}
	}else {
		leap = 0;
	}

	if (leap) {
		cout << "It is a leap year!";
	} else {
		cout << "It is not a leap year!";
	}
	cout << endl;
	system("pause");
	return 0;
}
