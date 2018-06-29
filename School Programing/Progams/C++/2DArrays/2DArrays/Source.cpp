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

const int ROWS = 3;
const int COLUMNS = 4;

void initialize(int arr[][COLUMNS]);
void display(const int arr[][COLUMNS]);


int main () 
{
	int num[ROWS][COLUMNS];
	initialize(num);
	display(num);


	system("pause");
	return 0;
}

void display(const int arr[][COLUMNS]) {
	for (int r = 0; r < ROWS; r++) {
		for (int c = 0; c < COLUMNS; c++) {
			cout << "The number for row " << r;
			cout << " and column " << c << ": " << arr[r][c] << endl;
		}
	}
}

void initialize(int arr[][COLUMNS]) {
	for (int r = 0; r < ROWS; r++) {
		for (int c = 0; c < COLUMNS; c++) {
			cout << "Enter a number for row " << r;
			cout << " and column " << c << ": ";
			cin >> arr[r][c];
		}
	}
}
