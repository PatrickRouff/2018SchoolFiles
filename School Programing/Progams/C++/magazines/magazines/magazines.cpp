#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors

//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed
void menu();

struct mag {
	string name;
	mag *next;
};

mag *head = NULL;
mag *cur = NULL;

mag* search(string h, int &x)
{
	cur = head;
	bool found = false;
	bool run = true;
	while (run) {
		found = (cur->name == h);
		//cout <<"Found: "<< found;
		if (found) {
			return cur;
		}
		if (cur->next == NULL) {
			run = false;
		}
		else {
			cur = cur->next;
			x++;
		}

	}

	if (!found) {
		return NULL;
	}
}

void add() {
	bool add = true;
	char in;
	while (add) {
		int i = 0;
		cur = head;
		string n;
		while (n == "")
		{
			if (i == 0) {
				cout << "Enter name of mag: ";
			}
			i++;
			getline(cin, n);
			if (n != "")
			{
				mag *temp = new mag;
				temp->name = n;
				temp->next = NULL;
				if (head != NULL) {
					while (cur->next != NULL) {
						cur = cur->next;
					}
					cur->next = temp;
				}
				else {
					head = cur = temp;
				}
			}
		}
		
		cout << "Continue adding?";
		cin >> in;
		if (in == 'Y' || in == 'y') {
			add = true;
		}
		else {
			add = false;
		}
	}
	menu();
}

/*void remove() {
	cur = head;

	int i = 0;
	mag *temp = NULL;

	if (cur == NULL) {
		cout << "No Mags to Delete" << endl;
		menu();
		return;
	}

	temp = cur;
	while (cur->next != NULL) {
		i++;
		temp = cur;
		cur = cur->next;
	}
	delete cur;
	temp->next = NULL;

	if (i == 0) {
		head = NULL;
	}

	menu();
}*/

void remove() {
	string look4 = "";
	int pos = 0;
	mag *r = NULL;
	mag *temp = NULL;
	int i = 0;
	if (head == NULL) {							//if the list is empty
		cout << "The list is empty!  Nothing to search for!";
		menu();
	}
	else //... perform the search
	{
		int j = 0;
		do
		{
			if (j == 0) { cout << "What mag are you looking for?" << endl; }
			j++;
			getline(cin, look4);

		} while (look4 == "");

		r = search(look4, pos);

		if (r != NULL)
		{
			cur = head;
			temp = cur;
			while (i != pos) {
				temp = cur;
				cur = cur->next;
				i++;
			}
			if (cur != head) {
				temp->next = cur->next;
				delete cur;
			}
			else {
				head = cur->next;
				delete cur;
			}

		}
		else {
			cout << "Mag does not match, no mag to delete." << endl;
		}
	}
	menu();
}

void print() {
	cur = head;
	if (head != NULL) {
		cout << "Mags:" << endl;
		int i = 0;
		cout << i << ": " << cur->name << endl;
		i++;
		while (cur->next != NULL) {
			cur = cur->next;
			cout << i << ": " << cur->name << endl;
			i++;
		}
	}
	else {
		cout << "Empty List, cannot print.";
	}

	menu();
}

int count() {
	cur = head;
	int i = 0;
	if (head != NULL) {
		i++;
		while (cur->next != NULL) {
			cur = cur->next;
			i++;
		}
		return i;
	}
	else {
		return 0;
	}
}

void split() {
	if (count() > 1) {
		cur = head;
		//cout << "head:" << head->name;
		//cout << "cur:" << cur->name;
		mag *temp = NULL;
		int num = count();
		cur = head;
		//cout << "%" << (num % 2);
		//cout << (num/2);
		if ((num % 2) == 1) {
			num = num - 1;
		}
		int i = 0;
		while (i < (num / 2)) {
			//cout << "I: " << i;
			temp = cur;
			//cout << cur->name;
			cur = cur->next;
			//cout << "G";
			//cout << cur->name;
			//cout << "B";
			i++;
		}
		//cout << "Y";
		temp->next = NULL;
		//cout << "N";
		while (cur->next != NULL) {
			//cout << "K";
			temp = cur;
			cur = cur->next;
			delete temp;
		}
		//cout << "Y";
		delete cur;
	}
	else if (count() == 1) {
		cout << "You can't split one mag!" << endl;
	}
	else if (count() == 0) {
		cout << "No mags to split!" << endl;
	}
	menu();
}

void menu() {
	int c;
	cout << endl << "Menu" << endl << "1. Add" << endl << "2. Remove" << endl << "3. Print" << endl << "4. Count" << endl << "5. Split" << endl << "6. Exit" << endl;
	cin >> c;

	switch (c)
	{
	case 1:
		add();
		break;
	case 2:
		remove();
		break;
	case 3: 
		print();
		break;
	case 4:
		cout << "Count: " << count() << endl;
		menu();
		break;
	case 5:
		split();
		break;
	case 6: 
		break;
	default:
		cout << "Error!  Try again...\n\n";
		menu();
	}
}

int main()
{
	menu();
	system("pause");
	return 0;
}
