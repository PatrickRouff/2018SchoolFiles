// a pointer "points" to another variable by holding the address of the other variable

#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	// AT THE DECLARATION STAGE, the * indicates that a pointer is being declared
	// Here,  a pointer to an int variable is being declared.
	int *ptr1; 


	// Initialization: pointers hold addresses of other variables.  
	// Here, pointer 1 is being set to hold the address of x.
	ptr1 = &x;

	cout << "Address of variable x:  " << &x << endl;
	cout << "Value stored in ptr1:  " << ptr1 << endl;

	// AFTER THE DECLARATION STAGE, the * now functions in a different manner.	
	// It is called the dereferencing or indirection operator.
	// *ptr1 provides access to the VALUE stored in the variable to which ptr1 points 
	cout << "ptr1 dereferenced is just x: " << *ptr1 << endl;


	// changes value in x indirectly
	*ptr1 = 50;


	cout << "Now *ptr1 is: " << *ptr1 << endl;
	cout << "Now x is: " << x << endl;

	/************************* Another Pointer ****************************/

	int y = 10;

	// declare and initialize ptr2 at same time
	int *ptr2 = &y;
	cout << endl << "Address of variable y:  " << &y << endl;
	cout << "Value stored in ptr2:  " << ptr2 << endl;

	cout << "Ptr2 dereferenced is just y:  " << *ptr2 << endl;

	/************************* Reassign Pointer ****************************/

	// ptr2 now points to same variable as ptr1
	ptr2 = ptr1;
	cout << endl << "Value now stored in ptr2:  " << ptr2 << endl;

	cout << "Ptr2 dereferenced is now x:  " << *ptr2 << endl;

	system("pause");
	return 0;
}