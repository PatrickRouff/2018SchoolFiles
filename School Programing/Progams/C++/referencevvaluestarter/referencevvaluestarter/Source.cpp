/*
Demonstrates the difference between by reference
and by value parameters.

Parameters can be passed "by value" to functions OR
passed "by reference" to functions.

"By Value":  A copy is passed to the function.  The
original value is not changed.

- safest approach

"By Reference":  The address of the original is passed
to the function.  The original value
can be changed.

- Use to return two or more values from function
- Use when passing large variable or object in
order to save memory.
*/

#include <iostream>

using namespace std;


//int will be passed by value - a copy is passed
void changeNonPerm(int);
//int will be passed by reference (address)
void changePerm(int &);


int main()
{
	int x = 20;
	cout << "This is the original value of x in main: " << x << endl << endl;

	// this is call by value
	changeNonPerm(x);
	cout << "This is x in main, after I called changeNonPerm: " << x << endl << endl;

	cout << "This is the current value of variable x in main: " << x << endl << endl;

	// this is call by reference
	changePerm(x);
	cout << "This is x in main, after I called changePerm: " << x << endl << endl;

	system("pause");
	return 0;
}

// only the copy of the original is changed
void changeNonPerm(int num) {
	num = 80;
	cout << "This is num in changeNonPerm: " << num << endl;
}

// address of original is passed 
// change is made to original value

void changePerm(int &num) {
	num = 80;
	cout << "This is num in changePerm: " << num << endl;
}

