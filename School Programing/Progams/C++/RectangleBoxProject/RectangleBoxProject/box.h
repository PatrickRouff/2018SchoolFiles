#pragma once

#include "rectangle.h"

class box : public rectangle {
public:
	void setDimension(double l, double w, double h);
	double getHeight();
	double area();
	double volume();
	void print();
	box();
	box(double l, double w, double h);
private:
	double height;
};