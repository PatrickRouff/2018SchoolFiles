#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

const int SIZE = 7;
//Declare Prototypes if needed

void getHoursPay(int[], int[], double[]);
void calcWage(int[], double[], double[]);
void display(int[], int[], double[], double[]);

int main()
{
	int empID[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	int hours[SIZE];
	double payRate[SIZE];
	double gross[SIZE];

	getHoursPay(empID, hours, payRate);
	calcWage(hours, payRate, gross);
	display(empID, hours, payRate, gross);

	system("pause");
	return 0;
}

void getHoursPay(int id[], int h[], double p[]) {
	int i = 0;
	int x = 0;
	double y = 0;
	while (i < SIZE) {
		cout << "For Employee " << id[i] << endl;
		cout << "	Enter Hours: ";
		cin >> x;
		if (x < 0) {
			while (x < 0) {
				cout << "	Invaild input. Hours cannot be negetive. Try again: ";
				cin >> x;
			}
			h[i] = x;
		} else {
			h[i] = x;
		}
		cout << "	Enter Pay Rate: ";
		cin >> y;
		if (y < 6) {
			while (y < 6) {
				cout << "	Invaild input. Hourly Rate cannot be below 6.00. Try Again: ";
				cin >> y;
			}
			p[i] = y;
		}
		else {
			p[i] = y;
		}
		i++;
	}
}

void calcWage(int h[], double p[], double g[]) {
	int i = 0;
	while (i < SIZE) {
		g[i] = (h[i] * p[i]);
		i++;
	}
}

void display(int id[], int h[], double p[], double g[]) {
	int i = 0;
	cout << "EMPID    HOURS   RATE       PAY" << endl;
	cout << "------------------------------------" << endl;
	while (i < SIZE) {
		cout << fixed << showpoint << setprecision(0) << right << setw(8) << id[i] << " " << setw(3) << h[i] << "    $" << fixed << showpoint << setprecision(2) << setw(6) << p[i] << "    $" << setw(8) << g[i] << endl;
		i++;
	}
}