#include "point.h"
#include <iostream>

using namespace std;

int main() {
	point p1; //default constructor

	int x = 0, y = 0;

	cout << "Enter x cord: ";
	cin >> x;
	cout << "Enter y cord: ";
	cin >> y;

	point p2(x, y); //constructor with args

	//use accessor functions to print cords
	cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

	p1.setX(-5);
	p1.setY(8);

	p2.moveHor(-3);
	p2.moveVer(-1);

	cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
	cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

	system("pause");
	return 0;
}