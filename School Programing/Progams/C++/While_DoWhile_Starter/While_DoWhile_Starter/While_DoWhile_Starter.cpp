// Using "while" and "do - while" loops

#include <iostream>

using namespace std;

//function prototypes

void menu();
void countWhile();
void usingContin();
void countDo_While();
void clearScreen();

int main()
{
	menu();
	return 0;
}
void menu()
{
	char choice;

	cout << "\nChoose an option:\n"
		<< "1) Count with while\n"
		<< "2) Count until contin is false\n"
		<< "3) Count with do - while\n"
		<< "4) Clear Screen/Restart\n"
		<< "5) Quit\n\n";

	cin >> choice;

	switch (choice)
	{
	case '1':
		countWhile();
		break;
	case '2':
		usingContin();
		break;
	case '3':
		countDo_While();
		break;
	case '4':
		clearScreen();
		break;
	case '5':
		cout << "Good bye.\n";
		break;
	default:
		cout << "Choice " << choice << " is INVALID!\n";
		menu();
	}

}

void countWhile()
{
	cout << "\n";

	int count = 1;

	while (count <= 10) {
		cout << count << " ";
		count++;
	}


	menu();
}


void usingContin()
{
	cout << "\n";

	bool contin = true;
	int count = 1;

	while (contin) {
		cout << count << " ";
		count++;

		if (count > 10) {
			contin = false;
		}
	}




	menu();
}

void countDo_While()
{
	cout << "\n";

	//dowhile checks at the end, so it always runs at least once. 

	int count = 1;
	do {
		cout << count << " ";
		count++ ;
	} while (count <= 10); //ends with ';'
	
	menu();
}

void clearScreen()
{
	system("CLS");

	menu();
}