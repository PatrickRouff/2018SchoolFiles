/*
1.  Demonstrates creating and deleting dynamic arrays.
2.  Demonstrates two different methods for manipulating the arrays with pointers.
*/

#include <iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[5];		// Dynamically creates an array with 5 contiguous memory locations
						// (each of type int) and stores the array's base address in pointer p
						// (The base address is the address of the first memory location (1st bucket)

						// Method 1:  Use pointer arithmetic to manipulate values in array
	*p = 10;
	cout << p << endl;
	cout << *p << endl;

	p++; //moves pointer to next bucket (4 bytes per move for int array)

	*p = 20;
	cout << p << endl;
	cout << *p << endl;

	p++;
	*p = 30;
	cout << p << endl;
	cout << *p << endl;

	p++;
	*p = 40;
	cout << p << endl;
	cout << *p << endl;

	p++;
	*p = 50;
	cout << p << endl;
	cout << *p << endl;

	cout << "Move p back to beginning of array so can delete" << endl;

	p = p - 4;
	cout << p << endl << endl;

	delete[] p; //deletes the dynamic array. 
	p = NULL; //avoid dangling pointer


						// Method 2:  Use standard array notation on the pointer to manipulate values in array
	cout << "Now useing pointer q" << endl;

	int *q = new int[5];

	cout << q << endl << endl;

	q[0] = 11;
	q[1] = 22;
	q[2] = 33;
	q[3] = 44;
	q[4] = 55;

	int i = 0;
	while (i < 5) {
		cout << "q[" << i << "] = " << q[i] << endl;
		i++;
	}

	cout << endl << endl;
	//using standard notation (method 2), pointer remains pointed at first location. 
	cout << q << endl << endl;

	delete q;
	q = NULL;

	system("pause");
	return 0;
}