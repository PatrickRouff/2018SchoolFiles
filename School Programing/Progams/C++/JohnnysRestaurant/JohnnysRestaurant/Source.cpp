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

struct menuItemType {
	string name;
	double price;
};

menuItemType menu[8];
vector<menuItemType> order;

//Declare Prototypes if needed

void getData();
void showMenu();
void check();

int main()
{
	getData();
	showMenu();

	char userin = ' ';
	int usernum = 0;

	while (userin != 'E' && userin != 'e') {
		cin >> userin;
		if ('0' <= userin && userin <= '9') {
			order.resize(order.size() + 1);
			usernum = ((int)userin - (int)'0') - 1;
			//cout << usernum;
			order[(order.size() - 1)] = menu[usernum];
		} else if (userin != 'E' && userin != 'e') {
			cout << "Error, Input Failure." << endl;
		}
	}

	check();

	system("pause");
	return 0;
}

void showMenu() {
	cout << "Welcome to Johnny's Resaurant!" << endl;
	cout << "Please select the items you want. You may only order one of each item." << endl;
	cout << "Press E when you are through." << endl << endl;
	int i = 0;
	while (i < 8) {
		cout << (i + 1) << ".   ";
		cout << fixed << showpoint << setprecision(2) << left << setw(15) << menu[i].name << " $" << setw(7) << menu[i].price << endl;
		i++;
	}
}

void check() {
	int size = order.size();
	int i = 0;
	double total = 0;
	while (i < size) {
		cout << fixed << showpoint << setprecision(2) << left << setw(15) << order[i].name << " $" << setw(7) << order[i].price << endl;
		total += order[i].price;
		i++;
	}
	double tax = total*0.07;
	total += tax;
	cout << fixed << showpoint << setprecision(2) << left << setw(15) << "Tax" << " $" << setw(7) << tax << endl;
	cout << fixed << showpoint << setprecision(2) << left << setw(15) << "Amount Due" << " $" << setw(7) << total << endl;
	
}

void getData()
{
	ifstream fin;
	fin.open("menu.txt");

	int i = 0;
	while (i < 8) {
		getline(fin, menu[i].name);
		fin >> menu[i].price;
		fin.ignore(80, '\n');
		fin.ignore(80, '\n');
		i++;
	}
}