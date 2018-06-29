#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

enum triType { scalene, isosceles, equilateral, noTri };

//Declare Prototypes if needed

triType triShape(double, double, double);
void printOut(triType);

int main()
{
	double a, b, c = 0;
	char r = ' ';
	cout << "First Side:";
	cin >> a;
	cout << "Second Side:";
	cin >> b;
	cout << "Third Side:";
	cin >> c;
	printOut(triShape( a,b,c));

	cout << "Again?" << endl;
	cin >> r;
	if (r == 'y' || r == 'Y') {
		main();
	}
	system("pause");
	return 0;
}

triType triShape(double a, double b, double c) {
	if (((a + b) > c) && ((c + b) > a) && ((a + c) > b)) {
		if (a == b && b == c ) {
			return equilateral;
		} else if ((a==b && b != c)|| (a == c && a != b)|| (c == b && c != a)) {
			return isosceles;
		} else {
			return scalene;
		}
	} else {
		return noTri;
	}
}

void printOut(triType x) {
	if (x == scalene) {
		cout << "Triangle Type: Scalene";
	} else if (x == equilateral) {
		cout << "Triangle Type: Equilateral";
	} else if (x== isosceles) {
		cout << "Triangle Type: Isosceles";
	} else {
		cout << "Triangle Type: Not a Triangle";
	}
	cout << endl;
}
