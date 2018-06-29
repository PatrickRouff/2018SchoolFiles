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
void kaboom();
void averages();
void drawbox();
void cls();

int main()
{
	menu();

	system("pause");
	return 0;
}

void menu() {
	char userin;

	cout << "------------------------------Loop Practice(choose a number)-------------------------------" << endl;
	cout << "Choose from the following options: " << endl;
	cout << "1) Kaboom\n2) Averages\n3) Draw Rectangle\n4) Clear Screen\n5) Quit" << endl;
	cin >> userin;

	switch (userin) {
	case '1': kaboom();
		break;
	case '2': averages();
		break;
	case '3': drawbox();
		break;
	case '4': cls();
		break;
	case '5': cout << "Goodbye!" << endl;
		break;
	default: cout << "Invaild input.";
		menu();
	}
}

void kaboom() {
	int x = 10;
	do {
		if (x == 0) {
			cout << "Kaboom!";
		} else {
			cout << x << "...";
		}
		x--;
	} while (x >= 0);
	cout << endl << endl;
	menu();
}

void averages() {
	double userin;
	double total = 0;
	char ch = ' ';
	int runs = 0;

	cout << endl;
	cout << "Enter numbers seperated by spaces, then a 'q' or 'Q' to quit." << endl;

	
	cin.get(ch);

	while (ch != 'q' && ch != 'Q') {
		if (isdigit(ch) || ch == '.') {
			cin.putback(ch);
			cin >> userin;
			total += userin;
			runs++;
		}
		cin.get(ch);
	}

	cout << "Average is: " << (total / runs) << "." << endl;
	cout << endl;
	menu();
}

void drawbox() {
	int height = 0;
	int width = 0;
	int h = 0;
	int w = 0;

	cout << "Enter height: ";
	cin >> height;
	cout << "Enter width: ";
	cin >> width;
	
	while (h < height) {
		while (w < width) {
			cout << "*";
			w++;
		}
		cout << endl;
		w = 0;
		h++;
	}

	menu();
}

void cls() {
	system("cls");
	menu();
}