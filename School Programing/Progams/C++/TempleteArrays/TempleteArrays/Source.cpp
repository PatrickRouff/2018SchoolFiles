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
template<typename anyType>
anyType findSmallest(anyType[]);
template<typename anyType>
void display(anyType[], anyType);

int main()
{
	int intergers[] = { 8, 4, -9, 5, 7, 8, 3, 2, 9, -5, 9, 2, 1, 5, -3 };
	string strings[] = { "Dan", "Will", "Bryan", "Matt", "Nathan", "Alex", "Dmitriy", "David", "Eric", "Steve", "Jason", "Sarvesh", "Kyle", "Nick", "Daphne" };
	double doubles[] = { 98.77, 89.6, 92.3, 96.4, 87.3, 95.3, 99.3, 99.55, 86.55, 87.335, 83.22, 88.66, 96.54, 92.69, 94.312 };

	cout << "Intergers Array: " << endl;
	display(intergers, (findSmallest(intergers)));
	cout << endl;
	cout << "Strings Array: " << endl;
	display(strings, (findSmallest(strings)));
	cout << endl;
	cout << "Doubles Array: " << endl;
	display(doubles, (findSmallest(doubles)));
	cout << endl;

	system("pause");
	return 0;
}

template<typename anyType>
anyType findSmallest(anyType arr[]) {
	int i = 1;
	int p = 0;
	anyType x;
	x = arr[0];
	while (i < 14) {
		if (x > arr[i]) {
			x = arr[i];
			p = i;
		}
		i++;
	}
	return x;
}

template<typename anyType>
void display(anyType a[], anyType x) {
	int i = 0;
	while (i < 14) {
		cout << a[i] << "	";
		i++;
	}
	cout << endl;
	cout << "Minimum value: " << x << endl;
}