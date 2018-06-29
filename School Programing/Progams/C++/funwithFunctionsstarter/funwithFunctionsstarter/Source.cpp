#include <iostream>
#include <cstdlib>
#include <ctime>
// for rand and srand
// to seed srand with time
#include <string>

using namespace std;

// function prototypes warn the compiler that the function is coming later

// fn1: returns nothing, takes no parameters
void welcome();
// fn2: returns nothing, 1 string parameter
void printName(string);
// fn3: returns nothing, 1 int parameter
void printX(int);
// fn4: returns double, takes 1 int parameter
double getHalf(int);
// fn5: returns int, takes 2 int parameters
int getRectArea(int, int);
// fn6: returns boolean, 1 double parameter
bool greaterThanPi(double);
// fn7: returns integer, no parameters
int getRandom();

int main()
{
	// fn1: returns nothing, takes no parameters
	welcome();
	// fn2: returns nothing, 1 string parameter
	printName("Patrick");
	// fn3:returns nothing, 1 int parameter
	printX(3);
	// fn4: returns double, takes 1 int parameter
	cout << "Half: " << getHalf(7) << endl;
	// fn5: returns int, takes 2 int parameters
	cout << "Area: " << getRectArea(3, 5) << endl;
	// fn6: returns boolean, 1 double parameter
	if (greaterThanPi(4.2)) {
		cout << "Greater than PI" << endl;
	}
	// fn7: returns integer, no parameters
	cout << "Random int: " << getRandom() << endl;


	system("pause");
	return 0;
}

void welcome() {
	cout << "Fun with Functions!" << endl;
}

void printName(string nm) {
	cout << "Hello " << nm << endl;
}

void printX(int times) {
	for (int i = 1; i <= times; i++) {
		cout << "X";
	}
	cout << endl;
}

double getHalf(int num) {
	return num / 2.0;
}

int getRectArea(int w, int h) {
	return w*h;
}

bool greaterThanPi(double n) {
	const double PI = 3.1415;
	return (n > PI);
}

int getRandom() {
	srand(time(0)); //seed with time
	int randInt = rand() % 100 + 1;//between 1, 100
	return randInt;
}