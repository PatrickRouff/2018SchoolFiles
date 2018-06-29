#pragma once
#include <string>	// need this at least in header or error with namespace std

using namespace std;

class Dog
{
public:
	Dog();	// default constructor
	Dog(int);
	void setAge(int);
	int getAge();
	void print();

private:
	int age;
};