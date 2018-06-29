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
	string name; 
	string loc;
	string w1, w2, w3;
	int v1 = 1;
	int v2 = 2;
	int v3 = 3;
	char count;
	int ctotal = 0;
	int nlength;
	int i = 0;
	int j = 0;
	bool hfound = false;

	cout << "Enter your name:";
	getline(cin, name);
	cout << "Enter where you live:";
	cin >> loc;

	nlength = name.length();

	while (i <= nlength) {
		if ('h'== name[i]) {
			hfound = true;
			break;
		}
		i++;
	}

	if (hfound) {
		cout << "'h' found at position " << i << "." << endl;
	} else {
		cout << "Your name does not contain the letter 'h'" << endl;
	}

	cout << "Enter to character to count:";
	cin >> count;

	count = toupper(count);

	while (j <= nlength) {
		if (count == toupper(name[j])) {
			ctotal++;
		}
		j++;
	}

	cout << "I found the letter " << count << " " << ctotal << " times." << endl;
	
	cout << "Please enter three words on seperate lines:" << endl;
	cin >> w1 >> w2 >> w3;

	while (!((int(w1[0])) <= (int(w2[0])) && (int(w2[0])) <= (int(w3[0])))) {
		if ((int(w1[0])) > (int(w2[0]))) {
			w1.swap(w2);
		} else if ((int(w2[0])) > (int(w3[0]))) {
			w2.swap(w3);
		}
		//cout << w1 << w2 << w3 << endl;
		//system("pause");
	}

	cout << "Your words in order:" << endl;
	cout << w1 << endl << w2 << endl << w3 << endl;

	name = name + " the great";
	cout << "Goodbye, " << name << "!" << endl;

	//cout << ((((int)(w1[0])) <= ((int)(w2[0])) && ((int)(w2[0])) <= ((int)(w3[0]))));

	system("pause");
	return 0;
}
