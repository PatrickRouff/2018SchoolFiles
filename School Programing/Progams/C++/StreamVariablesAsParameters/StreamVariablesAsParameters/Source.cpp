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

//Declare Prototypes if needed

const int COUNT = 7;
void getData(ifstream &inf, int nums[]);
void print(int nums[]);



int main()
{
	ifstream fin;
	fin.open("streamVariablesFile.txt");
	if (!fin) {
		cout << "Can't open input file, terminating.";
		return 1;
	}


	int nums[COUNT];

	getData(fin, nums);
	print(nums);
	fin.close();
	


	system("pause");
	return 0;
}

void getData(ifstream &inf, int nums[]) {
	for (int i = 0; i < COUNT; i++) {
		inf >> nums[i];
	}
}

void print(int nums[]) {
	for (int i = 0; i < COUNT; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
}