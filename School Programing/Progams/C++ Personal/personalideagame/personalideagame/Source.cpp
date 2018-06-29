#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//Written by Patrick Rouff as a test-in-progress idea. 

using namespace std;

//Declare Prototypes if needed

void gamebasic(int, int);
void menu();
void drawbasic(int, int);


string gameinput = " ";
char ch = ' ';


int main()
{
	int xpos = 25;
	int ypos = 5;
	gamebasic(xpos,ypos);

	system("pause");
	return 0;
}

void gamebasic(int xpos, int ypos) {
	drawbasic(xpos, ypos);
	cin >> gameinput; 
	cout << endl;
	int inputpos = 0;
	do {
		ch = gameinput[inputpos];
		switch (ch) {
		case 'w': ypos -= 1;
			break;
		case 'a': xpos -= 1;
			break;
		case 's': ypos += 1;
			break;
		case 'd': xpos += 1;
			break;
		case 'q': return;
			break;
		default: cout << "fail";
			break;
		}
		inputpos++;
	} while (inputpos < gameinput.length());
	gamebasic(xpos, ypos);
}

void drawbasic(int xpos, int ypos) {
	system("cls");
	int linenum = 0;
	int colnum = 0;

	do {
		do {	
			if (colnum == xpos && linenum == ypos) {
				cout << "@";
			} else { 
				cout << "#";
			}
			colnum++;
		} while (colnum <= 100);
		cout << endl;
		colnum = 0;
		linenum++;
	} while (linenum <= 25);

}