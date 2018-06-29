#include "Dog.h"

#include <iostream>

using namespace std;

Dog::Dog()
{
	age = 1;
}

Dog::Dog(int a)
{
	age = a;
}

int Dog::getAge()
{
	return age;
}

void Dog::setAge(int a)
{
	age = a;
}

void Dog::print()
{
	cout << "This dog's age is " << age << endl;
}
