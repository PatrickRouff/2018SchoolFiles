#include <iostream>
#include "circle.h"

using namespace std;

void circle::setRadius(double r)
{
	radius = r;
}

double circle::getRadius()
{
	return radius;
}

double circle::area()
{
	return 3.1416 * radius * radius;
}

double circle::circumference()
{
	return 2 * 3.1416 * radius;
}

circle::circle(double r)
{
	setRadius(r);
}

void circle::print() {
	cout << "Radius: " << radius << " Area: " << area() << " Circumfrance: " << circumference() << endl;
}