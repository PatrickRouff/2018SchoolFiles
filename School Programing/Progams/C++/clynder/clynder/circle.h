#pragma once
class circle
{
public:
	void setRadius(double r);

	double getRadius();

	double area();

	double circumference();

	void print();

	circle(double r = 0);
	//Constructor with a default parameter.

private:
	double radius;
};