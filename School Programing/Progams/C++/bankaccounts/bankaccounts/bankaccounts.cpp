#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

int main () 
{
	
	ifstream fin;
	ofstream fout;
	
	fin.open("inData.txt");
	fout.open("accounts.txt");
	
	string accnum;
	char type;
	double minbal;
	double curbal;

	string output;
	string transaction;

	while (!fin.eof()) {
		fin >> accnum >> type >> minbal >> curbal;
		//cout << accnum << type << minbal << curbal;

		if (type == 'C' || type == 'c') {
			if (curbal >= (minbal + 5000)) {
				curbal = curbal + (curbal*0.05);
				transaction = "Account earned 5% interest.";
			}
			else if (curbal >= minbal) {
				curbal = curbal + (curbal*0.03);
				transaction = "Account earned 3% interest.";
			}
			else {
				curbal = curbal - 25;
				transaction = "Account was charged $25 for being below minimum balance.";
			}

			fout << "Account #:" << accnum << "     Type: Checking      Current Balance:" << curbal << endl << transaction << endl;

		}
		else if (type == 'S' || type == 's') {
			curbal = curbal + (curbal*0.04);
			transaction = "Account earned 4% interest.";
			fout << "Account #:" << accnum << "     Type: Saving      Current Balance:" << curbal << endl << transaction << endl;
		}
		else {
			fout << "FAIL"<<endl<<endl;
		}
	}

	fin.close();
	fout.close();

    return 0;

}
