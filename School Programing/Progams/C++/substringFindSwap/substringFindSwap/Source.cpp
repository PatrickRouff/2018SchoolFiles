// String functions:  length(), size(), substring(), swap()

// Use Test Case: "Greetings Earthlings!"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;

	cout << "Enter a string:" << endl;
	getline(cin, s1);



	// Length() and size() functions give number of characters
	// They include spaces and punctuation.
	cout << s1.length() << endl;
	cout << s1.size() << endl;



	/*  s1.substr(x,y) returns the string that starts at position x
	and is y characters long (or until end if not long enough).
	*/
	cout << s1.substr(3, 2) << endl;
	cout << s1.substr(3, 50) << endl;





	//	s1.substr(x) starts at x position and goes for the rest of the string
	cout << s1.substr(6) << endl;


	// find() returns first occurrence of a substring.

	cout << s1.find("ing") << endl;


	// returns first occurrence starting at a particular position
	cout << s1.find("ing", 10) << endl;



	// find() can also search for a character.
	cout << s1.find('E') << endl << endl;



	/*
	find() returns an unsigned integer of type string::size_type

	If you use an int to capture the return value instead
	of string::size_type, you will get	the "signed/unsigned mismatch"
	warning and it can cause problems during comparisons.

	*/
	string::size_type pos = 0;
	pos = s1.find("Zoo");
	cout << pos << endl << endl;





	/*
	If a character or string is not found, the find function returns string::npos
	("not a position" in string).This value, string::npos, is the maximum value
	of the string size and will always be greater than actual string size.
	*/

	pos = 0;
	while (s1.find("ing", pos)!=string::npos) {
		pos = s1.find("ing", pos);
		cout << "I just found \"ing\" at position " << pos << endl;
		pos++;
	}








	// swap() interchanges contents of two string variables

	string s2 = "hello";
	s1.swap(s2);







	cout << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl << endl;

	system("pause");
	return 0;
}