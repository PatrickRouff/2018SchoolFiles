#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

void menu();
void countUpFor();
void countDownFor();
void countUpBy5();
void starsNestedFor();
void clearScreen();

int main()
{

	menu();
	system("pause");
	return 0;
}

void menu()
{
	char choice;

	cout << "\n\nChoose an option:\n"
		<< "1) Count Up with for loop\n"
		<< "2) Count Down with for loop\n"
		<< "3) Count Up by 5\n"
		<< "4) Stars with nested for loops\n"
		<< "5) Clear Scree/Restart\n"
		<< "6) Quit\n\n";

	cin >> choice;

	switch (choice)
	{
	case '1':
		countUpFor();
		break;
	case '2':
		countDownFor();
		break;
	case '3':
		countUpBy5();
		break;
	case '4':
		starsNestedFor();
		break;
	case '5':
		clearScreen();
		break;
	case '6':
		cout << "Goodbye.\n";
		break;
	default:
		cout << "Choice " << choice << " is INVALID\n";
		menu();
	}
}

void countUpFor()
{
	cout << "\n";

	for (int i = 1; i <= 10; i++) {
		cout << i <<" ";
	}

	menu();

}

void countDownFor()
{
	cout << "\n";

	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
	}

	menu();

}

void countUpBy5()
{
	cout << "\n";

	for (int i = 0; i <= 50; i += 5) {
		cout << i << " ";
	}

	menu(); 

}

void starsNestedFor()
{
	cout << "\n";
	int numStars = 1;

	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= numStars; j++) {
			cout << "*";
		}
		cout << endl;
		numStars++;
	}

	menu();

}

void clearScreen()
{
	system("CLS");
	menu();
}