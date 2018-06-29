#include <iostream>
#include <string>

using namespace std;

// Creating a simple linked list with 4 nodes (4 links in chain). 

/*
	A linked list consists of a group of components (usually structs or classes).
	Each component is called a node.  
	The nodes are linked together in a chain-like configuration.

	Every node (except the last one) contains a pointer with the address of
	the next node.  This is how the nodes are linked.

	Each node has two parts. One part contains the basic information about the
	data structure, and the other part is a pointer that points to the next node.

*/

//global structure definitions and variable

struct node				// If you were creating a linked list of schools, 
{						// you would use "school" instead of "node"
	int data;
	node *next;			// Pointer (link) to next node.  
};						// Again, you would use "school" instead of "node"

node *n = NULL;   // new pointer:  this will point to a new node
node *t = NULL;   // temporary pointer:  this will point to the current node
node *h = NULL;   // head pointer:  this will point to first node in list

void printAll();
void deleteAll();

int main()
{
	// Make 1st node.  Put data in it.
	// Set all pointers to point to 1st node.

	n = new node;
	n->data = 1;
	t = n;
	h = n;

	// Make 2nd node.  Put data in it.
	// Link 1st node to 2nd node with pointer.
	// Set temporary pointer to 2nd node.

	n = new node;
	n->data = 2;
	t->next = n;
	t = n;

	// Make 3rd node.  Put data in it.
	// Link 2nd node to 3rd node with pointer.
	// Set temporary pointer to 3rd node.

	n = new node;
	n->data = 3;
	t->next = n;
	t = n;

	// Make 4th node.  Put data in it.
	// Link 3rd node to 4th node with pointer.
	// Terminate 4th node.

	n = new node;
	n->data = 4;
	t->next = n;

	// END THE LINKED LIST

	n->next = NULL;

	printAll();
	deleteAll();

	system("pause");
	return 0;
}
/************************   PRINT THE LIST    **********************/

void printAll()
{
	t = h;

	do {
		cout << t->data << endl;
		t = t->next;
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