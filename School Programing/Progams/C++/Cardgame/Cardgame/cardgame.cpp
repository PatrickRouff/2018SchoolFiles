#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors
#include "card.h"

//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;
void game();
//Declare Prototypes if needed

void redo() {
	char input;
	cout << "Do You want to pay again?";
	cin >> input;
	if (input == 'y' || input == 'Y') {
		system("cls");
		game();
	}
}

void check(int pv, int cv) {
	int pw = 0;
	int cw = 0;
	if (cv == 21) { cw = 2; }
	if (cv < 21) { cw = 1; }
	if (cv > 21) { cw = 0; }
	if (pv == 21) { pw = 2; }
	if (pv < 21) { pw = 1; }
	if (pv > 21) { pw = 0; }
	/*cout << "House v:" << cv << endl;
	cout << "House w:" << cw << endl;
	cout << "P v:" << pv << endl;
	cout << "P w:" << pw << endl;*/

	if (pw == cw) {
		if (cv < 21) {
			if (cv > pv) {
				cout << "Tie. House Wins.";
				redo();
				return;
			}
			else if (pv > cv) {
				cout << "You Win.";
				redo();
				return;
			}
			else if (pv == cv) {
				cout << "Tie. House Wins.";
				redo();
				return;
			}
		}
		else {
			cout << "Tie. House Wins.";
			redo();
			return;
		}
	}
	if (pw > cw) {
		cout << "You Win.";
		redo();
		return;
	}
	if (pw < cw) {
		cout<<"House Wins.";
		redo();
		return;
	}
}

void game() {
	char input = 'y';
	int pv = 0;
	int cv = 0;
	card *p1 = new card();
	Sleep(1000);
	card *c1 = new card();

	p1->deal();
	pv += p1->getV();
	p1->show();
	cout << "	";
	c1->deal();
	cv += c1->getV();
	Sleep(1000);
	p1->deal();
	pv += p1->getV();
	p1->show();
	c1->deal();
	cv += c1->getV();

	while (input == 'y' || input == 'Y') {
		cout << "Do you want to hit?";
		cin >> input;
		if (input == 'y' || input == 'Y') {
			p1->deal();
			p1->show();
			pv += p1->getV();
		}
	}
	while (cv < 18) {
		c1->deal();
		cv += c1->getV();
	}

	check(pv, cv);
	return;
}

int main()
{
	game();
	system("pause");
	return 0;
}
