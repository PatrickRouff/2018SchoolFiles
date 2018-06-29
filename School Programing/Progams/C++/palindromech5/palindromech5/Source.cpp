#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed
void menu();
void numpal();
void stringpal();

int main()
{
	menu();
	system("pause");
	return 0;
}

void menu() {
	char userin = ' ';

	cout << endl;
	cout << "------------Palindromes-------------" << endl;
	cout << "1) Numeric Palindrome Test\n2) String Palindrome Test\n3) Quit\n";
	cin >> userin;

	switch (userin) {
	case '1': numpal();
		break;
	case '2': stringpal();
		break;
	case '3':  return;
		break;
	default: cout << "Input fail";
		break;
	}
}

void numpal() {
	int backend = 0;
	int frontend = 0;
	int input = 0;
	string inputstring = " ";
	int runtime = 0;
	int inlength = 0;
	int i = 0;
	int j = 0;

	cout << "Enter a number: ";
	cin >> input;

	inputstring = to_string(input);
	runtime = inputstring.length() / 2;
	inlength = inputstring.length();
	
	while (j < runtime) {
		frontend = ((int)((input / (pow((10), (inlength - j -1))))) * (pow((10),(runtime-j-1))));
		backend += ((((int)((input % (int)((pow((10), (j + 1)))))))/(int)(pow(10,j))) *(pow((10), (runtime - j - 1))));
		j++;
	}

	if (frontend == backend) {
		cout << input << " is a palindrone.";
	}
	else {
		cout << input << " is NOT a palindrone.";
	}

	menu();
}

void stringpal() {
	string input = "";
	string backend = "";
	string frontend = "";
	string nopun = "";
	string samecap = "";
	int runtime = 0;
	int inlength = 0;
	int i = 0;
	int j = 0;
	int n = 0;

	cin.ignore();
	cout << "Enter a string: ";
	getline(cin, input);

	do  {
		if (isalpha(input[j])) {
			nopun += input[j];
		}
		j++;
	} while (j < input.length());
	//cout << nopun;
	do {
		samecap += toupper(nopun[n]);
		n++;
	} while (n < nopun.length());

	//cout << "**"<<samecap<<"**";

	runtime = samecap.length() / 2;
	inlength = samecap.length();
	do {
		backend += samecap[(inlength - i - 1)];
		frontend += samecap[i];
		i++;
	} while (i < runtime);

	//cout << "f**" << frontend << "**" << endl << "b**" << backend << "**";

	if (frontend == backend) {
		cout << input << " is a palindrone.";
	}
	else {
		cout << input << " is NOT a palindrone.";
	}

	menu();
}