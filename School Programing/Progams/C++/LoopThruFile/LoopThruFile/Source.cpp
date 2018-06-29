#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

int main()
{
	string listItem, completeList;
	ifstream fin;
	fin.open("HarryPotterList.txt");

	while (!fin.eof()) {
		getline(fin, listItem);
		completeList += listItem + "\n";
	}

	cout << "List of names: \n" << completeList;

	system("pause");
	return 0;
}
