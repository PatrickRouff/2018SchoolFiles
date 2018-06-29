#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

struct drinkTypes{
	string name;
	double cost;
	int inv;
};

drinkTypes drinks[5];
double rev = 0;

//Declare Prototypes if needed
void setUp();
void menu();
void buy(int);

int main()
{

	setUp();
	
	menu();
	
	cout << "Total Earnings: $" << rev << endl;

	system("pause");
	return 0;
}

void menu() {
	int i = 0;
	int userinput;

	while (i < 5) {
		cout << (i+1) << ") ";
		cout << fixed << showpoint << setprecision(2) << left << setw(15) << drinks[i].name << " " << setw(7) << drinks[i].cost << endl;
		i++;
	}
	cout << "6) Leave the drink machine" << endl;
	cout << "Choose one: ";
	cin >> userinput;

	switch (userinput) {
	case 1: buy(0);
		break;
	case 2: buy(1);
		break;
	case 3: buy(2);
		break;
	case 4: buy(3);
		break;
	case 5: buy(4);
		break;
	case 6: return;
	}
	
}

void buy(int num) {
	if (drinks[num].inv == 0) {
		cout << "Sorry, that drink is sold out. Please try again." << endl;
		menu();
		return;
	}
	double cash;
	double change;
	cout << "Enter Amount of Money: ";
	cin >> cash;
	change = (cash - drinks[num].cost);
	cout << "Thump, Thump, Thump, Splat!" << endl << "Enjoy your beverage!" << endl << endl;
	drinks[num].inv--;
	rev += drinks[num].cost;

	cout << "Your change: " << change << endl;
	if (change > 0) {
		cout << "Your change of " << change << " has been dropped into the Change Dispensor" << endl;
	}

	cout << "There are " << drinks[num].inv << " can(s) of that drink left." << endl;
	menu();
	return;
}

void setUp() {
	drinks[0].name = "Cola";
	drinks[0].cost = 0.75;
	drinks[0].inv = 20;
	drinks[1].name = "Root Beer";
	drinks[1].cost = 0.75;
	drinks[1].inv = 20;
	drinks[2].name = "Lemon-Lime";
	drinks[2].cost = 0.75;
	drinks[2].inv = 20;
	drinks[3].name = "Grape Soda";
	drinks[3].cost = 0.80;
	drinks[3].inv = 20;
	drinks[4].name = "Cream Soda";
	drinks[4].cost = 0.80;
	drinks[4].inv = 20;
}