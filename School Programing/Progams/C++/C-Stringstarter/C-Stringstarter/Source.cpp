/*
	So far, we have worked with C++ strings.  This program demonstrates how 
	to work with C strings (character arrays).  C strings need different methods
	than C++ strings.

	test with:  Mrs. Maricic and C++ Programming and Mrs. Smith
*/

#include <string>
#include <iostream>

using namespace std;

int main()
{
/*
	C-strings (char arrays) must have a null terminator '\0' at the end.  
	The null terminator tells the computer where the end of the char array is.
	Without the null terminator, if you output a char array, it doesn't know
	where to stop! So, you must leave room for it in your array!
*/

	char str1[6] = { 'H','e','l', 'l', 'o' };	 // 6th bucket is for the null terminator!
	cout<<str1<<endl;

	char str2[9] = "Hi there";	// 8 char + 1 for the null terminator
	cout<<str2<<endl;

	char name1[15];
	char course[20];

	cout<<"Enter teacher: ";
	cin.get(name1, 7);	 // only gets "Mrs. M" - saves space for null terminator
	cout<<name1<<endl;		

	cin.ignore(80,'\n');	// have to get rid of rest of line (and new line char)

	cout<<"Enter course: ";
	cin.get(course, 15);
	cout<<course<<endl;	
	cin.ignore(80,'\n');


	char name2[15];
	cout<<"Enter another teacher: ";
	cin.get(name2, 7);
	cout<<name2<<endl<<endl;		

	if (strcmp(name1, name2) == 0)
		cout << "The same";
	else if (strcmp(name1, name2) < 0)
		cout << "name1 comes before name2 alphabetically";
	else if (strcmp(name1, name2) > 0)
		cout << "name1 comes after name2 alphabetically";

	cout<<endl<<endl;

	cin.ignore(80,'\n');

	
	char name3[15];

	strcpy_s(name3, name1);		// copies name1 to name 3 - CAN'T DO name3 = name1
	cout<<"name1: "<<name1<<"\tname3: "<<name3<<endl<<endl;

	cout << "Length of name1: " << strlen(name1);			// does NOT include null terminator

	cout<<endl<<endl;

	
	
	system("pause");
	return 0;
}