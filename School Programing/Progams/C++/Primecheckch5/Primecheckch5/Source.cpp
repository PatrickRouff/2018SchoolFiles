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
void primecheck();

int main()
{
	primecheck();


	system("pause");
	return 0;
}

void primecheck() {
	int input = 0;
	int i = 3;
	bool prime = true;
	char cont = ' ';

	cout << "Enter a positive integer: ";
	cin >> input;
	//cout << input;
	
	while (i < input) {
		if (input == 4) {
			prime = false;
			break;
		}
		prime = !((input%i) == 0);
		if (!prime) {
			break;
		}
		i++;
	}

	if (prime) {
		cout << "The number is a prime." << endl;
	} else {
		cout << "The number is NOT prime." << endl;
	}

	cout << "Do you want to test another number?" << endl;
	cout << "Enter 1 to continue or any other key to quit.";
	cin >> cont;
	if (cont == '1') {
		primecheck();
	} else {
		cout << "Goodbye!" << endl;
	}

	//primecheck();
}