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

double calcAve(int);
void findLowest(double&, double);


int main()
{
	int num = 0;

	cout << "How many test scores?" << endl;
	cin >> num;

	cout << "Average score with the lowest score dropped: " << calcAve(num);


	system("pause");
	return 0;
}

double calcAve(int num) {
	int i = 0;
	double input;
	double lowest = 100;
	double total = 0;

	while (i < num) {
		cout << "Enter a score: ";
		cin >> input;
		if (input < 0 || input > 100) {
			cout << endl << "Invaild input. Please enter a number between 1 and 100." << endl;
		} else {
			findLowest(lowest, input);
			total += input;
			i++;
		}
	}

	total -= lowest;
	return (total / (num - 1));
}

void findLowest(double &lowest, double input) {
	if (input < lowest) {
		lowest = input;
	}
}