#include <iostream>
#include <string>

using namespace std;

// Creating a linked list		NOTE:  CHANGED DATA IN STRUCTURES FROM 1ST EXAMPLE
struct node
{
	int data;
	node *next;
};

node *n = NULL;		// new pointer
node *t = NULL;		// temp pointer
node *h = NULL;		// head pointer

void printAll();
void deleteAll();

int main()
{

	/************************   MAKE LIST    *********************************/

	// Make 1st node.  Put data in it.  Set all pointers to point to 1st node.

	n = new node;
	n->data = 2;
	t = n;  // temporary pointer set to new node (1st node)
	h = n;  // head pointer set to 1st node

			// Make 2nd node.  Put data in it.  Link 1st node to 2nd node with pointer. Set temporary pointer to 2nd node.

	n = new node;
	n->data = 4;
	t->next = n;
	t = t->next;  //   t = n;  would also work here

				  // Make 3rd node.  Put data in it.  Link 2nd node to 3rd node with pointer. Set temporary pointer to 3rd node.

	n = new node;
	n->data = 6;
	t->next = n;
	t = t->next;

	// Make 4th node.  Put data in it.  Link 3rd node to 4th node with pointer. End after 4th node.

	n = new node;
	n->data = 8;
	t->next = n;

	n->next = NULL;  // END THE LINKED LIST

	printAll();

	cout << endl;

	/************************   ADD TO BEGINNING OF LIST   *********************************/

	//	Insert a node at head of the list:

	n = new node;
	n->data = 1;
	n->next = h;
	h = n;




	printAll();

	cout << endl;

	/************************   ADD TO END OF LIST    *********************************/

	//	Insert a node at end of the list:

	t = h;

	n = new node;
	n->data = 9;
	n->next = NULL;

	while (t->next != NULL) {
		t = t->next;
	}

	t->next = n;


	printAll();

	cout << endl;

	/************************   ADD TO MIDDLE OF LIST    *********************************/

	t = h;

	n = new node;
	n->data = 5;

	while (t->data != (n->data-1)) {
		t = t->next;
	}

	n->next = t->next;
	t->next = n;

	/*while (t->data > 5) {		NOTE: ASSUMING A VALUE LESS THAN WHAT WE ARE PUTTING IN, RATHER THAN JUST AN INT LESS
		*prev = t;
		t = t->next;
	}
	n.next = prev.next;
	prev.next = n;
	*/


	printAll();

	deleteAll();

	system("pause");
	return 0;
}

/************************   PRINT THE LIST    *********************************/

void printAll()
{
	t = h;	// put temporary pointer at the head!

	do
	{
		cout << t->data << endl;  // print data in node

		t = t->next;	// move temporary pointer to next node

	} while (t != NULL);
}

void deleteAll()
{
	t = h;

	do {
		n = t->next;
		delete t;
		t = n;
		cout << "Deleted" << endl;
	} while (n != NULL);

}