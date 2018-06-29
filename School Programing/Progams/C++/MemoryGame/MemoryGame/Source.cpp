#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

void game(char[4][4], bool[4][4], bool[4][4]);
void display(char[4][4], bool[4][4], bool[4][4]);
//void gameWon(bool[4][4], bool &);
void genBoard(char[4][4]);
void key(char[4][4], bool[4][4], bool[4][4]);

int main()
{

	char board[4][4] = { {'a','a','b','b'},{'c','c','d','d'},{'e','e','f','f'},{'g','g','h','h'} };
	bool found[4][4] = { { false,false,false,false },{ false,false,false,false },{ false,false,false,false },{ false,false,false,false } };
	bool revealed[4][4] = { { false,false,false,false },{ false,false,false,false },{ false,false,false,false },{ false,false,false,false } };

	genBoard(board);
	game(board, found, revealed);

	system("pause");
	return 0;
}

void game(char b[4][4], bool f[4][4], bool r[4][4]) {
	bool won = false;
	int match = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int moves = 0;
	while (!(won)) {
		key(b, r, f);
		display(b,r, f);
		cout << "Enter first card(x,y): ";
		cin >> y1 >> x1;
		while (x1 < 0 || x1 > 3 || y1 < 0 || y1 > 3) {
			cout << "Invaild Input. Try Again: ";
			cin >> y1 >> x1;
		}
		r[x1][y1] = true;
		key(b, r, f);
		display(b, r, f);
		cout << "Enter second card(x,y): ";
		cin >> y2 >> x2;
		while (x2 < 0 || x2 > 3 || y2 < 0 || y2 > 3 || (x1 == x2 && y1 == y2) ) {
			cout << "Invaild Input. Try Again: ";
			cin >> y2 >> x2;
		}
		r[x2][y2] = true;
		key(b, r, f);
		display(b, r, f);
		if ((b[x1][y1]) == (b[x2][y2])) {
			f[x1][y1] = true;
			f[x2][y2] = true;
			match++;
			cout << "Match Found!" << endl;
		} else {
			r[x1][y1] = false;
			r[x2][y2] = false;
			cout << "No Match!" << endl;
		}
		Sleep(2000);
		//gameWon(f, won);
		moves++;
		if (match == 8) {
			cout << endl << "GAME OVER! You won in " << moves << " moves.";
			won = true;
		}
	}
}

void display(char b[4][4], bool r[4][4], bool f[4][4]) {
	//system("CLS");
	int i = 0;
	cout << "-----------Memory Game-----------" << endl;
	cout << " 	0	1	2	3" << endl;
	while (i <= 3) {
		int j = 0;
		while (j <= 3) {
			if (j == 0) {
				cout << i << "	";
			}
			if (r[i][j]) {
				if (f[i][j]) {
					cout << " " << "	";
				} else {
					cout << b[i][j] << "	";
				}
			} else {
				cout << "*	";
			}
			j++;
		}
		cout << endl;
		i++;
	}
}

void key(char b[4][4], bool r[4][4], bool f[4][4]) {
	system("CLS");
	int i = 0;
	cout << "-----------Memory Key------------" << endl;
	cout << "	0	1	2	3" << endl;
	while (i <= 3) {
		int j = 0;
		while (j <= 3) {
			if (j == 0) {
				cout << i << "	";
			}
			if (true) {
				if (false) {
					cout << " " << "	";
				}
				else {
					cout << b[i][j] << "	";
				}
			}
			else {
				cout << "*	";
			}
			j++;
		}
		cout << endl;
		i++;
	}
}

/*void gameWon(bool f[4][4], bool &won) {
	int i = 0;
	int j = 0;
	while (i<3) {
		j = 0;
		while (j<3) {
			won = f[i][j];
			if (!(won)) {
				break;
			}
			j++;
		}
		i++;
	}
}*/

void genBoard(char board[4][4]) {
	int i = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	srand(time(0));
	while (i < 60) {
		//srand(time(0));
		x1 = rand() % 3;
		//srand(time(0));
		y1 = rand() % 3;
		//srand(time(0));
		x2 = rand() % 3;
		//srand(time(0));
		y2 = rand() % 3;
		if (!(x1 == x2 && y1 == y2)) {
			swap(board[x1][y1], board[x2][y2]);
			i++;
		}
	}
}