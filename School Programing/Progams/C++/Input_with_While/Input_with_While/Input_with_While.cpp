#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

int main()
{
	double num = 0;
	char ch = ' ';

	cout << "Enter a list of numbers separated by spaces\n";
	cout << "Type q or Q to quit\n";

	cin.get(ch);

	while (ch != 'q' && ch != 'Q') {
		if (isdigit(ch) || ch == '.') {
			cin.putback(ch);
			cin >> num;
			cout << num << " ";
		}
		cin.get(ch);
	}

	system("pause");
	return 0;
}
