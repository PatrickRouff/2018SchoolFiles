/*This example demos using pointers with objects.
This example uses stati memory (what we have used so far)

static uses a constant amount of memory (RAM) for their lifetime in a program

the real power behind pointers comes from the abilty to allocate and deallocate memory during program execution, whihc is called dynamic memory.

Dynamic Memory is the next example.*/

#include "Dog.h"
#include<iostream>

using namespace std;

int main() {
	Dog *dogPTR; //decalre pointer of type dog

	Dog rover;  //using default constructor to make dog object

	dogPTR = &rover; //initulize pointer to address of dog.

	(*dogPTR).print(); //Method 1

	dogPTR->print(); //Method 2

	dogPTR->setAge(7);

	dogPTR->print();

	system("pause");
	return 0;
}