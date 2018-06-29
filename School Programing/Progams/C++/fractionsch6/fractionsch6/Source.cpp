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
int gcf(int, int);
void reduce(int&, int&);

int main()
{
	int x = 0;
	int y = 0;
	int xo = 0;
	int yo = 0;
	char r = 'y';

	while (r == 'y') {
		cout << "-------Fraction Reducer-------" << endl;
		cout << "Numberator: ";
		cin >> x;
		cout << "Denominator:";
		cin >> y;
		while (y == 0) {
			cout << "Cannot enter 0 for the denominator. Please try again:";
			cin >> y;
		}

		xo = x;
		yo = y;
		reduce(x, y);

		cout << xo << "/" << yo << " = ";

		if ((x%y) != 0) {
			cout << x << "/" << y << endl;
		} else {
			cout << x << endl;
		}
		
		cout << "Calculate another(y/n): ";
		cin >> r;
	}


	system("pause");
	return 0;
}

int gcf(int x, int y) {
	int gcf = 0;
	if (x > y) {
		int temp = y;
		y = x;
		x = temp;
	}

	for (int i = 1; i <= y; ++i) {
		if (x % i == 0 && y % i == 0) {
			 gcf = i;
		}
	}
	return gcf;
}

void reduce(int& x, int& y) {
	int hcf = gcf(x, y);
	x = x / hcf;
	y = y / hcf;
	return;
}