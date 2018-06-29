#pragma once
// modified from D.S. Malik example

//#ifndef RECTANGLE_H
//#define RECTANGLE_H

class rectangle
{
public:
	void setDimension(double l, double w);

	double getLength();

	double getWidth();

	double area();

	double perimeter();

	void print();

	rectangle();
	//Default constructor

	rectangle(double l, double w);

private:
	double length;
	double width;
};
