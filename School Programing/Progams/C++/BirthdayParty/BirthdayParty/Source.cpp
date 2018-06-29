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

//Declare Prototypes if needed
void display(vector<string> &);
void dropLast(vector<string> &);
void addToEnd(vector<string> &, string);
void findReplace(vector<string> &, string, string);
void nameRemovalBasic(vector<string> &, string);
void nameRemovalAdvanced(vector<string> &, string);

int main()
{
	vector<string> v;
	v.resize(5);
	v[0] = "Amy";
	v[1] = "Bo";
	v[2] = "Carl";
	v[3] = "Doris";
	v[4] = "Eve";

	display(v);
	dropLast(v);
	display(v);
	addToEnd(v, "Fred");
	display(v);
	findReplace(v, "Carl", "Cal");
	display(v);
	nameRemovalBasic(v, "Amy");
	display(v);
	nameRemovalAdvanced(v, "Bo");
	display(v);

	system("pause");
	return 0;
}

void display(vector<string> &v) {
	int size = v.size();
	int i = 0;
	while (i < size) {
		cout << v[i] << " ";
		i++;
	}
	cout << endl;
}

void dropLast(vector<string> &v) {
	v.resize(v.size() - 1);
}

void addToEnd(vector<string> &v, string input) {
	v.resize(v.size() + 1);
	v[(v.size() - 1)] = input;
}

void findReplace(vector<string> &v, string find, string replace) {
	bool replaced = false;
	int size = v.size();
	int i = 0;
	while (i < size) {
		if (find == v[i]) {
			v[i] = replace;
			replaced = true;
		}
		i++;
	}
	if (!replaced) {
		cout << "Name does not match";
	}
}

void nameRemovalBasic(vector<string> &v, string find) {
	bool removed = false;
	string temp;
	int size = v.size();
	int i = 0;
	while (i < size) {
		if (find == v[i]) {
			v[i] = v[v.size() - 1];
			v.resize(v.size() - 1);
			i = size;
			removed = true;
		}
		i++;
	}
	if (!removed) {
		cout << "Name does not match";
	}
}

void nameRemovalAdvanced(vector<string> &v, string find) {
	bool removed = false;
	int pos;
	int size = v.size();
	int i = 0;
	while (i < size) {
		if (find == v[i]) {
			pos = i;
			removed = true;
			i = size;
		}
		i++;
	}
	if (!removed) {
		cout << "Name does not match";
	}
	if (removed) {
		vector<string> temp(v.size() - 1);
		i = 0;
		int j = 0;
		while (i < size) {
			if (i == pos) {
				i++;
			}
			else {
				temp[j] = v[i];
				i++;
				j++;
			}
		}
		v = temp;
	}
}