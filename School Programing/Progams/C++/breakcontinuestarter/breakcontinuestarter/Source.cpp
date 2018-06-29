/*
This programs shows how to use break and continue.

It also indicates how cin can be used as an EOF (end of file) indicator.

BREAK:
You can use a break statement in while, for, and do...while loops
to immediately exit from loop.
The program goes to the first statement after the loop.
Break should be used sparingly.

CONTINUE:
You can use a continue statement in while, for, and do...while loops.
It skips the remaining statements in the loop and proceeds with the
next iteration of the loop.

NOTE:
When using continue in a while loop, the update statement (e.g., x++)
may not execute (depends on where it is).

When using continue in a for loop, the update statement ALWAYS executes.
*/

#include <iostream>

using namespace std;

int main()
{
	// EXAMPLE 1:  using break in a loop

	// This loop is designed to quit if a negative number is entered
	int sum = 0;
	int num = 0;

	cout << "Enter number: ";
	cin >> num;

	/*
	Below: We can use cin as EOF indicator (best for entering numbers).
	Just enter a letter, etc. to stop.  Because you will be trying to read a char
	into a int variable, this will causes input stream to enter fail state.  The
	input stream variable, cin, returns the value false and quits the loop.
	*/

	while (cin) {
		if (num < 0) {
			cout << "Negetive number in data." << endl;
			break;
		}

		sum += num;
		cout << "Enter number: ";
		cin >> num;
	}






	cout << "Example 1 Loop has quit. \n\n";

	/*******************************************/

	// EXAMPLE 2:  using continue in a loop

	// This loop is designed to skip any negative numbers, but continue processing

	sum = 0;
	num = 0;

	cout << "Now beginning Example 2 Loop. \n\n";

	cout << "Enter number: ";
	cin >> num;

	while (cin) {
		if (num < 0) {
			cout << "Negative numebr found." << endl;
			cout << "Enter numeber: ";
			cin >> num;
			continue;
		}
		sum += num;
		cout << "Enter numebr: ";
		cin >> num;
	}







	cout << "Sum is " << sum << endl;

	return 0;
}