#include <iostream>
#include <string>
#include "usclock.h"
#include "clock.h"

using namespace std;

int main() {

	usclock c1(12, 30, 15, "MST");
	c1.printTime();
	cout << endl;

	usclock c2;
	c2.setTime(6,49,59);
	c2.printTime();
	cout << endl;

	c1.addSec();
	c2.addSec();

	c1.printTime();
	cout << endl;
	c2.printTime();
	cout << endl;

	system("pause");
	return 0;
}
