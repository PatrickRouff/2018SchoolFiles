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

struct playerInfo{
	string name;
	int num;
	int points;
};

//Declare Prototypes if needed

int main()
{
	playerInfo players[4];

	int i = 0;
	while (i < 4) {
		cout << endl;
		cout << "PLAYER #" << (i + 1) << endl;
		cout << "---------" << endl;
		cout << "Player's name: ";
		getline(cin, players[i].name);
		//cin.ignore(80, '\n');
		cout << "Player's Number: ";
		cin >> players[i].num;
		cout << "Points scored: ";
		cin >> players[i].points;
		cin.ignore(80, '\n');

		i++;
	}
	i = 0;

	int total = 0;
	int highest = 0;
	cout << endl;
	cout << "NAME               NUMBER POINTS" << endl;
	while (i < 4) {
		cout << fixed << showpoint << setprecision(0) << left << setw(20) << players[i].name << " " << setw(7) << players[i].num << setw(6) << players[i].points << endl;
		total += players[i].points;
		if (players[highest].points < players[i].points) {
			highest = i;
		}
		i++;
	}
	cout << "TOTAL POINTS: " << total << endl;
	cout << "The player who scored the most was: " << players[highest].name << endl;

	system("pause");
	return 0;
}