// modified from D.S. Malik example

#include <iostream>
#include "rectangle.h" 

using namespace std;

void rectangle::setDimension(double l, double w)
{
	length = l;
	width = w;
}

double rectangle::getLength()
{
	return length;
}

double rectangle::getWidth()
{
	return width;
}

double rectangle::area()
{
	return length * width;
}

double rectangle::perimeter()
{
	return 2 * (length + width);
}

void rectangle::print()
{
	cout << "Length = " << length
		<< "   Width = " << width;
}

rectangle::rectangle(double l, double w)
{
	setDimension(l, w);
}

rectangle::rectangle()
{
	length = 0;
	width = 0;
}

