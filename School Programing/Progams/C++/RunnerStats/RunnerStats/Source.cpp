#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

const int runners = 5;
//Declare Prototypes if needed
void input(ifstream &fin, double miles[runners][8], string names[runners]);
void calave(double miles[runners][8]);
void print(double miles[runners][8], string names[runners]);



int main()
{
	ifstream fin;
	fin.open("RunnerProgramData.txt");

	double miles[runners][8];
	string names[runners];

	input(fin, miles, names);
	calave(miles);
	print(miles, names);



	system("pause");
	return 0;
}

void input(ifstream &fin, double miles[runners][8], string names[runners]) {
	int i = 0;
	while (i < runners) {
		fin >> names[i];
		int j = 0;
		while (j < 7) {
			fin >> miles[i][j];
			j++;
		}
		i++;
	}
}

void calave(double miles[runners][8]) {
	int i = 0;
	while (i < runners) {
		int j = 0;
		double ave = 0;
		while (j < 7) {
			ave += miles[i][j];
			//cout << ave;
			j++;
		}
		ave = ave / 7;
		miles[i][7] = ave;
		i++;
	}
}

void print(double miles[runners][8], string names[runners]) {
	cout << "Name      Day 1  Day 2  Day 3  Day 4  Day 5  Day 6  Day 7  Average" << endl;
	int i = 0;
	int v = 5;
	while (i < runners) {
		cout << left << setw(10) << names[i];
		int j = 0;
		while (j < 8) {
			if (j == 7) {
				v = 7;
			} else {
				v = 5;
			}
			cout << right << fixed << showpoint << setprecision(2) << setw(v) << miles[i][j] << "  ";
			j++;
		}
		cout << endl;
		i++;
	}
	
}