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

int numOfWords(string);

int main()
{
	string input;

	cout << "Please enter a string:";
	getline(cin, input);
	//cout << endl <<input;
	cout << "The are " << numOfWords(input) << " words in that string." << endl;

	system("pause");
	return 0;
}

int numOfWords(string input) {

	int num = 0;
	int x = input.length();
	int i = 0;
	//cout << "X:" << x << endl;
	bool lastCharSpace = true;

	while (i <= x) {
		if (input[i] != ' ') {
			if (lastCharSpace){
				num++;
			}
			lastCharSpace = false;
		} else {
			lastCharSpace = true;
		}
		i++;
		//cout << "S:" << num << " " << lastCharSpace<<endl;
	}
	return num;
}