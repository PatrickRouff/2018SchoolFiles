// Demonstrates assignment, relational operators and arithmetic operators with pointers

// Warning:  Pointer Arithmetic can be dangerous! Do not try this at home.

#include <iostream>

using namespace std;

int main()
{
	int *p1 = new int;
	*p1 = 5;

	int *p2 = new int;
	*p2 = 15;

	cout << "p1 is " << p1 << " and *p1 is " << *p1 << endl;
	cout << "p2 is " << p2 << " and *p2 is " << *p2 << endl;

	if (p1 != p2)
		cout << "p1 and p2 are NOT pointing to the same memory location\n\n";

	cout << "Now,use the assignment operator: let p2 = p1" << endl;
	p2 = p1;	// Using the assingment operator on pointers

	cout << "p1 is " << p1 << " and *p1 is " << *p1 << endl;
	cout << "p2 is " << p2 << " and *p2 is " << *p2 << endl;

	if (p1 == p2)
		cout << "p1 and p2 are pointing to same memory location\n\n";

	cout << "p1 is " << p1 << endl;

	p1++;		// Incrementing memory address not a number 
				// Since int size is 4 bytes, increments by 4 bytes
	cout << "Following p++, p1 is " << p1 << endl;

	p1--;
	cout << "Following p--, p1 is " << p1 << endl;

	p1 = p1 + 2;			// Increments 4*2 bytes = 8 bytes
	cout << "Following p1 = p1 + 2, p1 is " << p1 << endl;

	p1 = p1 - 1;			// Decreases by 4*1 bytes = 4 bytes
	cout << "Following p1 = p1 - 1, p1 is " << p1 << endl;

	system("pause");
	return 0;

}