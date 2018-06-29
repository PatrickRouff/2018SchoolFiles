// modified from D.S. Malik example

#include <iostream>

#include "box.h"
#include "rectangle.h"
//
//

using namespace std;

void box::setDimension(double l, double w, double h)/////////////////
{
	rectangle::setDimension(l, w);
	height = h;
	//
}

double box::getHeight()
{
	return height;
}

// surface area of a box is 2(L × W) + 2(L × h) + 2(W × h)

double box::area()
{
	return (2.0*((getLength() * getWidth()) + (getLength() * height) + (getWidth() * height)));
}

double box::volume()
{
	return (rectangle::area()*height);
}

void box::print()
{
	rectangle::print();
	cout << "	Height =  " << height;
}

box::box()
{
	height = 0.0;
}

box::box(double l, double w, double h) : rectangle(l, w) /////////////////////////
{
	height = h;
	//rectangle(l, w);
}