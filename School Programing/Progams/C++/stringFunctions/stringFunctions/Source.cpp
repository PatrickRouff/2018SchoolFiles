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
	string name = "";

	string::size_type rPos = 0; //find() returns unsigined list

	cout << "Enter your full name: ";
	getline(cin, name);

	cout << "Name Length: " << name.length() << " characters." << endl;

	rPos = name.find('r'); //find position of first lowercase r.

	if (rPos != string::npos) {
		cout << "Letter r found at position " << rPos << endl;
	} else {
		cout << "Letter r not found." << endl;
	}

	if (name.length() > 0) {
		cout << "First letter: " << name[0] << endl;
		cout << "Last Letter: " << name[name.length() - 1] << endl;
	}

	cout << "Your name, letter by letter: " << endl;
	int x = 0;

	do {
		cout << name[x] << endl;
		x++;
	} while (x < name.length());

	cout << endl;

	string allCaps = "";
	for (int i = 0; i < name.length(); i++) {
		allCaps += toupper(name[i]);
	}

	cout << "In all caps: " << allCaps << endl;

	string nospaces = "";

	for (int i = 0; i < name.length(); i++) {
		if (isalpha(name[i])) {
			nospaces += name[i];
		}
	}

	cout << "With no spaces or punctuation: " << nospaces << endl;

	system("pause");
	return 0;
}
