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

void initialize(int[]);
void display(const int[]);

const int SIZE = 6;

int main()
{

	int nums[SIZE];

	initialize(nums);

	cout << endl;

	display(nums);

	system("pause");
	return 0;
}

void initialize(int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		cout << endl << "Enter a number for bucket " << i << ": ";
		cin >> arr[i];

	}


}

void display(const int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		cout << endl << "Bucket #" << i << " = " << arr[i];

	}
}