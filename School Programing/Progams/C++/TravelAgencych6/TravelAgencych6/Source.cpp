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
void menu();
double climbing(int, int, int);
double climbing(int);
double scuba(int, int);
double spelunking(int, int);
void getTotal(double);

fstream fout;

int main()
{
	menu();
	system("pause");
	return 0;
}

void menu() {
	int trip = 0;
	int ppl = 0;
	int instruction = 0;
	int equip = 0;
	
	fout.open("Output.txt");

	cout << "High Adventure Travel Agency" << endl;
	cout << "----------------------------" << endl;
	cout << "1) Devil's Courthouse Adventure Weekend" << endl;
	cout << "2) Scuba Bahama" << endl;
	cout << "3) Barron Cliff Spelunk" << endl;
	cout << "4) Exit Program" << endl;
	cout << endl;
	cout << "Enter 1, 2, 3, or 4: ";
	cin >> trip;
	cout << endl;
	cout << "How many people are going on the trip: ";
	cin >> ppl;
	cout << endl;
	cout << "How many people are going to need instruction: ";
	cin >> instruction;
	cout << endl;
	cout << "How many people are going to rent equipment: ";
	cin >> equip;
	cout << endl;

	switch (trip) {
	case 1: if (ppl == instruction && instruction == equip) {
				getTotal(climbing(ppl));
			} else {
				getTotal(climbing(ppl, instruction, equip));
			}
		break;
	case 2: getTotal(scuba(ppl, instruction));
		break;
	case 3: getTotal(spelunking(ppl, equip));
		break;
	case 4: cout << "Goodbye!";
		break;
	}
	fout.close();
	

}

double climbing(int ppl, int instruction , int equip) {
	double discount = 0;
	fout << setfill('.') << left << setw(25) << "Number in Party" << setfill(' ') <<  right << setw(6) << ppl << endl;
	fout << fixed << showpoint << setprecision(2);
	fout << setfill('.') << left << setw(25) << "Base Charges" << "$" << setfill(' ') << right << setw(7) << double(350*ppl) << endl;
	if (ppl > 4) {
		discount = (350 * ppl) * 0.10;
	}
	fout << setfill('.') << left << setw(24) << "Discount" << "-$" << setfill(' ') << right << setw(7) << discount << endl;
	fout << setfill('.') << left << setw(25) << "Instruction" << "$" << setfill(' ') << right << setw(7) << double(100 * instruction) << endl;
	fout << setfill('.') << left << setw(25) << "Equipment Rental" << "$" << setfill(' ') << right << setw(7) << double(120 * equip) << endl;
	return ((350*ppl)+(100*instruction)+(120*equip))-discount;
}

double climbing(int value) {
	double discount = 0;
	fout << setfill('.') << left << setw(25) << "Number in Party" << setfill(' ') << right << setw(6) << value << endl;
	fout << fixed << showpoint << setprecision(2);
	fout << setfill('.') << left << setw(25) << "Base Charges" << "$" << setfill(' ') << right << setw(7) << double(350 * value) << endl;
	if (value > 4) {
		discount = (350 * value) * 0.10;
	}
	fout << setfill('.') << left << setw(24) << "Discount" << "-$" << setfill(' ') << right << setw(7) << discount << endl;
	fout << setfill('.') << left << setw(25) << "Instruction" << "$" << setfill(' ') << right << setw(7) << double(100 * value) << endl;
	fout << setfill('.') << left << setw(25) << "Equipment Rental" << "$" << setfill(' ') << right << setw(7) << double(120 * value) << endl;
	return (value*570) - discount;
}

double scuba(int ppl, int instruction) {
	double discount = 0;
	fout << setfill('.') << left << setw(25) << "Number in Party" << setfill(' ') << right << setw(6) << ppl << endl;
	fout << fixed << showpoint << setprecision(2);
	fout << setfill('.') << left << setw(25) << "Base Charges" << "$" << setfill(' ') << right << setw(7) << double(350 * ppl) << endl;
	if (ppl > 4) {
		discount = (350 * ppl) * 0.10;
	}
	fout << setfill('.') << left << setw(24) << "Discount" << "-$" << setfill(' ') << right << setw(7) << discount << endl;
	fout << setfill('.') << left << setw(25) << "Instruction" << "$" << setfill(' ') << right << setw(7) << double(100 * instruction) << endl;
	fout << setfill('.') << left << setw(25) << "Equipment Rental" << "$" << setfill(' ') << right << setw(7) << "0.00" << endl;
	return ((350 * ppl) + (100 * instruction)) - discount;
}

double spelunking(int ppl, int equip) {
	double discount = 0;
	fout << setfill('.') << left << setw(25) << "Number in Party" << setfill(' ') << right << setw(6) << ppl << endl;
	fout << fixed << showpoint << setprecision(2);
	fout << setfill('.') << left << setw(25) << "Base Charges" << "$" << setfill(' ') << right << setw(7) << double(700 * ppl) << endl;
	if (ppl > 4) {
		discount = (700 * ppl) * 0.10;
	}
	fout << setfill('.') << left << setw(24) << "Discount" << "-$" << setfill(' ') << right << setw(7) << discount << endl;
	fout << setfill('.') << left << setw(25) << "Instruction" << "$" << setfill(' ') << right << setw(7) << "0.00" << endl;
	fout << setfill('.') << left << setw(25) << "Equipment Rental" << "$" << setfill(' ') << right << setw(7) << double(240 * equip) << endl;
	return ((700 * ppl) + (240 * equip)) - discount;
}

void getTotal(double subtotal) {
	fout << setfill('=') << left << setw(33) << "=" << endl;
	fout << setfill('.') << left << setw(25) << "Subtotal" << "$" << setfill(' ') << right << setw(7) << subtotal << endl;
	fout << setfill('.') << left << setw(25) << "Tax" << "$" << setfill(' ') << right << setw(7) << subtotal*0.05 << endl;
	fout << setfill('.') << left << setw(25) << "Total Bill" << "$" << setfill(' ') << right << setw(7) << subtotal*1.05 << endl;
	fout << setfill('.') << left << setw(25) << "Deposit" << "$" << setfill(' ') << right << setw(7) << subtotal*0.5 << endl;
	return;
}
