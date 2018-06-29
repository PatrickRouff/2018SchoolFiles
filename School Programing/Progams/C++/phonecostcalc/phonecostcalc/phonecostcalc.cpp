#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

string menuoption;
int regmin;
int predaymin;
int prenigmin;
double cost;
double extra1;
double extra2;
double extracost1;
double extracost2;

void menu();

void menu()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Please Choose from the Following Options. \n1. Regular Service \n2. Premium Service \n3. About this Program. \n4. Quit."<<endl;
	cin >> menuoption;
	if (menuoption == "1") {
		cout << "You have choosen the Regular Service. Please enter the number of minutes used." << endl;
		cin >> regmin;
		if (regmin <= 50) {
			cost = 10.00;
		}
		else {
			extra1 = regmin - 50;
			cost = (extra1*0.2) + 10.00;
		}
		cout << "The month's bill is " << cost<<"."<<endl;
		menu();
	} else if (menuoption == "2") {
		cout << "You have choosen the Premium Service. Please enter the number of daytime minutes used."<<endl;
		cin >> predaymin;
		cout << "Please enter the number of nighttime minutes used."<<endl;
		cin >> prenigmin;
		if (predaymin <= 75) {
			extracost1 = 0;
		}
		else {
			extra1 = predaymin - 75;
			extracost1 = (extra1*0.1);
		}
		if (prenigmin <= 100) {
			extracost2 = 0;
		}
		else {
			extra2 = prenigmin - 100;
			extracost2 = (extra2*0.05);
		}
		cost = extracost1 + extracost2 + 25.00;
		cout << "This month's bill is " << cost<<"."<<endl;
		menu();
	} else if (menuoption == "3") {
		cout << "This program is used to calculate phone bills." << endl;
		menu();
	} else if (menuoption == "4") {
		cout << "Goodbye!" << endl;
		return;
	} else {
		cout << "Invaild input. Please Try again." << endl;
		menu();
	}
}

int main()
{
	//cout<<showpoint(2);

	menu();

	system("pause");
	return 0;
}

