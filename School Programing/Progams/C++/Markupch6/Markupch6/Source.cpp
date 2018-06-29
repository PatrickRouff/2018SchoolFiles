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
double retailPrice(double, double);

int main()
{
	double wholesale = 0.0;
	double markup = 0.0;
	double retail = 0.0;

	cout << "What is the wholesale cost of the item?" << endl;
	cin >> wholesale;
	cout << "What is the markup percentage?" << endl;
	cin >> markup;
	markup = markup / 100;

	retail = retailPrice(wholesale, markup);

	cout << "The retail cost is: $" << retail << endl;


	system("pause");
	return 0;
}

double retailPrice(double whole, double markup) {
	return (whole + (whole*markup));
}