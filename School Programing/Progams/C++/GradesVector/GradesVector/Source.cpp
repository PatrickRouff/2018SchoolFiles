#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed
void display(vector<double> &);

int main()
{
	ifstream fin;
	fin.open("Grades.txt");
	vector<double> grades(0);
	string name;
	getline(fin, name);
	//fin.ignore(80, '\n');
	//cout << name;
	while (!fin.eof()) {
		grades.resize(grades.size() + 1); // keep resizing as add data
		fin >> grades[grades.size() - 1]; //lines seperated by spaces
	}
	cout << "Student name is: " << name << endl << endl;
	cout << "Filling grades vector from text file." << endl;
	display(grades);
	cout << endl;

	bool ran = false;
	double smallest = grades[0];
	int pos = 0;
	int size = grades.size();
	int i = 1;
	while (i < size) {
		ran = true;
		if (grades[i] < smallest) {
			smallest = grades[i];
			pos = i;
		}
		i++;
	}

	double ave = 0;

	if (ran) {
		cout << "Dropped Score is " << grades[pos] << endl << endl;
		i = 0;
		while (i < size) {
			if (i == pos) {
				i++;
			} else {
				ave += grades[i];
				i++;
			}
		}
		ave = ave / (size - 1);
	} else {
		ave = grades[0];
	}

	cout << name << " has a test average of: " << ave << endl;

	system("pause");
	return 0;
}

void display(vector<double> &v) {
	int size = v.size();
	int i = 0;
	while (i < size) {
		cout << v[i] << " ";
		i++;
	}
	cout << endl;
}