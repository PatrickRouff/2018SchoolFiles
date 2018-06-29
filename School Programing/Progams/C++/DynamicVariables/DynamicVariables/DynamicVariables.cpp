/*	Dynamic data structures are stored in the heap.
The heap is the part of the computer's RAM that has not been
assigned to open applications or the operating system itself.

First you must reserve memory in the heap.
This process is allocating.

When finished, you must deallocate or free that memory.
Otherwise, memory leakage occurs.
Memory leakage could cause a computer to crash.
*/

#include <iostream>

using namespace std;

int main()
{
	/*  Note that the new memory space created below cannot be
	manipulated	directly because it is unnamed.
	The pointer must be used.
	*/
	int *p;

	//allocate memory for int var
	p = new int; //also returns address of the memory

	*p = 75;

	cout << p << endl;
	cout << *p << endl;

	delete p; //avoid memory leak
			  //deallocates memory space that p points to
			  //doesn't delete pointer itself.

	p = NULL; //avoid dangeling pointer
			  //wipes memory address from pointer that points to nothing.

	cout << p << endl;

	p = new int;
	*p = 44;

	cout << p << endl;
	cout << *p << endl;

	delete p;

	p = NULL;


	system("pause");
	return 0;
}