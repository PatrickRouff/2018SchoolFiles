#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors

//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

int *allocateI(int input) {
	int *p2 = new int[input];
	if ((p2 != NULL)) {
		return p2;
	}
	else {
		return NULL;
	}
}

string *allocateS(int input) {
	string *p2 = new string[input];
	if ((p2 != NULL)) {
		return p2;
	}
	else {
		return NULL;
	}
}

int main()
{
	int cannum;
	cout << "How many canidates: ";
	cin >> cannum;

	string *name = allocateS(cannum);
	int *votes = allocateI(cannum);
	int totalvotes = 0;

	
	int i = 0;
	while (i < cannum) {
		cout << "Enter last name: ";
		cin >> name[i];
		cout << "Enter total number of votes: ";
		cin >> votes[i];
		totalvotes += votes[i];
		i++;
	}

	i = 0;
	int winner;
	int temptop = 0;
	cout << "CANIDATES     TOTAL VOTES     % OF VOTE" << endl;
	cout << fixed << showpoint << setprecision(2);
	while (i < cannum) {
		cout << left << setw(14) << name[i] << right << setw(10) << votes[i] << setw(14) << (((double)votes[i]) / ((double)totalvotes))*100.00 << endl;
		i++;
		if (temptop < votes[i]) {
			winner = i;
			temptop = votes[i];
		}
	}
	cout << left << setw(14) << "Total:" << right << setw(11) << totalvotes << endl;
	cout << left << setw(8) << "Winner:" << right << setw(11) << name[winner] << endl;
	system("pause");
	return 0;
}
