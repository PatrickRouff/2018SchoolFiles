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

int main () 
{
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	int s5 = 0;
	int i = 1;

	cout << "Enter today's sales at Store 1: ";
	cin >> s1;
	cout << "Enter today's sales at Store 2: ";
	cin >> s2;
	cout << "Enter today's sales at Store 3: ";
	cin >> s3;
	cout << "Enter today's sales at Store 4: ";
	cin >> s4;
	cout << "Enter today's sales at Store 5: ";
	cin >> s5;

	cout << endl << endl << "SALES BAR CHART" << endl;

	cout << "Store 1:";
	i = 1;
	do {
		cout << "*";
		i++;
	} while (i < (s1/100));
	cout << endl;

	cout << "Store 2:";
	i = 1;
	do {
		cout << "*";
		i++;
	} while (i < (s2 / 100));
	cout << endl;

	cout << "Store 3:";
	i = 1;
	do {
		cout << "*";
		i++;
	} while (i < (s3 / 100));
	cout << endl;

	cout << "Store 4:";
	i = 1;
	do {
		cout << "*";
		i++;
	} while (i < (s4 / 100));
	cout << endl;

	cout << "Store 5:";
	i = 1;
	do {
		cout << "*";
		i++;
	} while (i < (s5 / 100));
	cout << endl;

	system("pause");
	return 0;
}
