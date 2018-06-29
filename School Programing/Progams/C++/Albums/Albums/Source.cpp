#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

//*********************************************

struct album
{
	string group;
	string name;	// name of album
	string label;
	int year;
	double price;
};
//*********************************************

vector <album> myCollection;

//*********************************************

void menu();
void initialize(vector <album> &);		// copy file contents to myCollection vector
void print(vector <album>);
vector <album> firstN(int, vector <album>); //gets first n elements and puts them in a new vector


											// add a album to myCollection vector - YOU COMPLETE
void addOne(vector <album> &);

// copy myCollection vector to the file - YOU COMPLETE
void updateFile(vector <album> &);

// brings up a menu--the user can choose the search criteria
// puts results of search into a new vector
// YOU COMPLETE
vector <album> search(vector <album>);

//*********************************************

int main()
{
	//cout << "1";
	initialize(myCollection);
	system("pause");
	return 0;
}
//*********************************************

void menu()
{
	//cout << "3";
	char choice;
	int n = 0;

	cout << "1. Add an album\n"
		<< "2. Print my albums\n"
		<< "3. Print first n albums in database\n"
		<< "4. Search the database\n"
		<< "5. Exit\n";
	cin >> choice;
	cin.ignore(80, '\n');

	vector <album> subList; //for choice 3
	vector <album> result;  //for choice 4

	switch (choice)
	{
	case '1':
		addOne(myCollection);
		updateFile(myCollection);
		initialize(myCollection);
		break;

	case '2':
		print(myCollection);
		break;

	case '3':
		cout << "How many albums do you want to get?";
		cin >> n;
		subList = firstN(n, myCollection);
		print(subList);
		break;

	case '4':
		result=search(myCollection);
		print(result);
		break;

	case '5':
		cout << "See ya!" << endl << endl;
		break;

	default:
		cout << "ERROR - Try again!" << endl;
		menu();
	}
}
//*********************************************

void initialize(vector <album> &v)
{
	album item;
	ifstream fin;
	fin.open("albums.txt");
	v.resize(0);

	while (!fin.eof())
	{
		//cout << "2";
		getline(fin, item.group);
		getline(fin, item.name);
		getline(fin, item.label);

		fin >> item.year;
		fin >> item.price;

		fin.ignore(80, '\n');
		fin.ignore(80, '\n');

		if (item.group != "")
		{
			v.resize(v.size() + 1);

			v[v.size() - 1] = item;				// puts whole item structure into vector
		}
	}

	fin.close();

	cout << "Loaded " << v.size() << " albums into the database...\n";

	menu();
}
//*********************************************

void print(vector <album> v)
{
	cout << "\n\nYOUR COLLECTION" << endl;

	cout << setprecision(2) << fixed << showpoint;
	cout << setfill('-') << setw(80) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i<v.size(); i++)
	{
		cout << setw(20) << v[i].group << setw(20) << v[i].name
			<< setw(20) << v[i].label << setw(7) << v[i].year
			<< setw(7) << "$" << v[i].price << endl;
	}

	cout << endl << endl;

	menu();
}
//*********************************************

vector <album> firstN(int n, vector <album> v)
{
	vector <album> r(n);

	if (n > v.size())
	{
		r.resize(v.size());
	}

	for (int i = 0; i<r.size(); i++)
	{
		r[i] = v[i];
	}

	return r;
}

void addOne(vector <album> &v) {
	album item;
	cout << "Artist? ";
	getline(cin, item.group);
	cout << "Album Name? ";
	getline(cin, item.name);
	cout << "Label? ";
	getline(cin, item.label);

	cout << "Year? ";
	cin >> item.year;
	cout << "Price? ";
	cin >> item.price;
	
	cin.ignore(80, '\n');
	//cin.ignore(80, '\n');
	
	v.resize(v.size() + 1);
	v[v.size() - 1] = item;
}

void updateFile(vector <album> &v) {
	ofstream fout;
	fout.open("albums.txt");
	int i = 0;
	while (i < v.size()) {
		fout << v[i].group << endl;
		fout << v[i].name << endl;
		fout << v[i].label << endl;
		fout << v[i].year << endl;
		fout << v[i].price << endl;
		fout << endl;
		i++;
	}
	fout.close();
}

vector <album> search(vector <album> v) {
	char choice;
	int n = 0;

	cout << "What criteria do you want to search by?" << endl;

	cout << "1. Artist\n"
		<< "2. Album Name\n"
		<< "3. Label\n"
		<< "4. Year\n"
		<< "5. Price\n";
	cin >> choice;
	cin.ignore(80, '\n');

	string input;
	double inputnum;
	vector<album> output;
	int i = 0;

	switch (choice)
	{
	case '1':
		cout << "Artist Name: ";
		getline(cin, input);
		while (i < v.size()) {
			if (v[i].group == input) {
				output.resize(output.size() + 1);
				output[(output.size() - 1)] = v[i];
			}
			i++;
		}
		break;

	case '2':
		cout << "Album Name: ";
		getline(cin, input);
		while (i < v.size()) {
			if (v[i].name == input) {
				output.resize(output.size() + 1);
				output[(output.size() - 1)] = v[i];
			}
			i++;
		}
		break;

	case '3':
		cout << "Label: ";
		getline(cin, input);
		while (i < v.size()) {
			if (v[i].label == input) {
				output.resize(output.size() + 1);
				output[(output.size() - 1)] = v[i];
			}
			i++;
		}
			break;

	case '4':
		cout << "Year: ";
		cin >> inputnum;
		while (i < v.size()) {
			if (v[i].year == inputnum) {
				output.resize(output.size() + 1);
				output[(output.size() - 1)] = v[i];
			}
			i++;
		}
		break;

	case '5':
		cout << "Price: ";
		cin >> inputnum;
		while (i < v.size()) {
			if (v[i].price == inputnum) {
				output.resize(output.size() + 1);
				output[(output.size() - 1)] = v[i];
			}
			i++;
		}
		break;

	default:
		cout << "ERROR - Try again!" << endl;
		search(v);
		}
	return output;
}