#include <iostream>
#include <iomanip>
#include <string>		// DON'T FORGET THIS!

using namespace std;

int main()
{
	enum colors { brown, blue, red, green, yellow };
	colors myColor, popularColor;

	char ch1, ch2;

	cout << "Choose your color: brown, blue, red, green, or yellow:" << endl;

	// Type in word

	// cin >> myColor;		// can't do this
	// Must input enum indirectly

	cin >> ch1 >> ch2;  // need to read first 2 char
						//	to distinguish between brown and blue

	switch (ch1)
	{
	case 'B': case 'b':				// brown or blue
		if (ch2 == 'r')
			myColor = brown;
		else
			myColor = blue;
		break;
	case 'R': case 'r':				// red
		myColor = red;
		break;
	case 'G': case 'g':				// green
		myColor = green;
		break;
	case 'Y': case 'y':				// yellow
		myColor = yellow;
		break;
	default:
		cout << "Illegal input" << endl;
	}

	popularColor = myColor;

	cout << "myColor is " << myColor << endl;
	cout << "Popular color is " << popularColor << endl;

	// Must output enum indirectly
	cout << "myColor is ";

	switch (myColor)
	{
	case brown:
		cout << "brown";
		break;
	case blue:
		cout << "blue";
		break;
	case red:
		cout << "red";
		break;
	case green:
		cout << "green";
		break;
	case yellow:
		cout << "yellow";
		break;
	}

	cout << endl;

	return 0;

}
