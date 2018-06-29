#pragma once
#include "circle.h"

class cylinder : public circle {
public:
	cylinder();
	cylinder(double h, double r);
	double vol();
	double sa();
	void printAll();
	void setHeight(double h);
private:
	double height;
};