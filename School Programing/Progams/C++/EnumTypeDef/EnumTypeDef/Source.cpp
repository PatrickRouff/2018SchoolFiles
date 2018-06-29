#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed

int main()
{

	enum month {jan, feb, mar, april, may, jun, jul, aug, sep, oct, nov, dec};

	month dateNickHired = jan;
	month dateNickFired = feb;
	month dateKaraHired = jan;
	month dateKaraQuit = dec;

	if (dateNickFired - dateNickHired > dateKaraQuit - dateKaraHired) {
		cout << "Nick worked longer.";
	} else {
		cout << "Kara worked longer.";
	}
	cout << "\nNick was fired in " << dateNickFired << endl;


	system("pause");
	return 0;
}
