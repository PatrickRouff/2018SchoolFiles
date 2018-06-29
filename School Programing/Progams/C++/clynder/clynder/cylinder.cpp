#include "cylinder.h"
#include "circle.h"
#include <iostream>

using namespace std;

cylinder::cylinder() : circle() {
	height = 0;
}

cylinder::cylinder(double h, double r) : circle(r) {
	height = h;
}

double cylinder::vol() {
	return ((circle::area())*height);
}

double cylinder::sa() {
	return (((circle::circumference())*height) + ((circle::area()) * 2));
}

void cylinder::setHeight(double h) {
	height = h;
}

void cylinder::printAll() {
	cout << "Radius: " << circle::getRadius() << " Height: " << height << " Volume: " << vol() << " Surface Area: " << sa() << endl;
}