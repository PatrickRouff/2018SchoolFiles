#include <iostream>
#include <string>

using namespace std;

/*
why you should use  string::size_type
(instead of int)

Note:  both find and length functions return this data type
(string::size_type) which is unsigned
*/

int main()
{
	int pos;		// to hold position in string

	string s2 = "Hello There";

	pos = s2.find('q');
	cout << "position: " << pos << endl;		// output for not found

	if (pos < s2.length())
		cout << pos << " is less than " << s2.length() << endl;
	else if (pos > s2.length())
		cout << pos << " is greater than " << s2.length() << endl;
	else
		cout << pos << " is equal to " << s2.length() << endl;

	system("pause");
	return 0;
}