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

string JibbWord(string);

int main()
{
	string input;
	string lower = "";
	string output = "";
	string word = "";
	int i = 0;

	cout << "Enter a string." << endl;
	cout << "English:";
	getline(cin, input);
	//cout << input << endl;

	int x = input.length();

	while (i <= x) {
		lower += tolower(input[i]);
		i++;
	}

	//cout << lower << endl;
	i = 0;

	while (i <= x) {
		if (lower[i] == ' ') {
			output+= JibbWord(word);
			word = "";
		} else {
			word += lower[i];
		}
		i++;
	}
	output += JibbWord(word);

	cout << "Jibberish: " << output;

	system("pause");
	return 0;
}

string JibbWord(string input) {
	int x = input.length();
	int i = 1;
	string output;

	output += input[0];

	while (i <= x) {
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
			output += "iddig";
		}
		output += input[i];
		i++;
	}

	return output;
}