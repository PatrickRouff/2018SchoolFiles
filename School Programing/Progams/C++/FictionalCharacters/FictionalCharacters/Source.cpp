#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct fictCharType
{
	string name;
	string house;
};

void readFromFile();
void showCharacters();
void printFavorites();

fictCharType charList[8];
vector<fictCharType> favs;

int main()
{
	readFromFile();
	showCharacters();
	printFavorites();

	system("pause");
	return 0;
}

void readFromFile()
{
	ifstream fin;
	fin.open("HP_Characters.txt");

	for (int i = 0; i < 8; i++)
	{
		getline(fin, charList[i].name);
		getline(fin, charList[i].house);
		fin.ignore(80, '\n');	// blank lines in file
	}
}

void showCharacters()
{
	int choice;
	cout << "Choose favorites. Press 0 to quit." << endl << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << (i + 1) << ". ";
		cout << left << setw(20) << charList[i].name;
		cout << setw(10) << " House: " << charList[i].house << endl;
	}

	cin >> choice;

	while (choice != 0) {
		favs.resize(favs.size() + 1);
		favs[favs.size() - 1].name = charList[choice - 1].name;
		favs[favs.size() - 1].house = charList[choice - 1].house;
		cout << "Choose another favorite. Press 0 to quit." << endl << endl;
		cin >> choice;
	}

}

void printFavorites() {
	cout << endl << "Your favorites are:" << endl << endl;
	for (int i = 0; i < favs.size(); i++)
	{
		cout << (i + 1) << ". ";
		cout << left << setw(20) << favs[i].name;
		cout << setw(10) << " House: " << favs[i].house << endl;
	}
}