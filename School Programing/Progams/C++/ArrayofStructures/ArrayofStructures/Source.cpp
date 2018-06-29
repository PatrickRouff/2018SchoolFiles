#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo {
	int hours;
	double payrate;

};

int main() {
	PayInfo workers[5];

	cout << "Enter hours worked and hourly rates.\n";
	for (int i = 0; i < 5; i++) {
		cout << "Enter hours worked by employee #" << (1 + i) << ": ";
		cin >> workers[i].hours;
		cout << "Enter hourly pay for employee #" << (1 + i) << ": ";
		cin >> workers[i].payrate;
	}

	cout << "Here is the gross pay of each employee:\n";
	cout << setprecision(2) << fixed << showpoint;

	for (int i = 0; i < 5; i++) {
		cout << "Employee #" << (i + 1) << ": $";
		cout << (workers[i].hours*workers[i].payrate);
		cout << endl;
	}

	system("pause");
	return 0;
}