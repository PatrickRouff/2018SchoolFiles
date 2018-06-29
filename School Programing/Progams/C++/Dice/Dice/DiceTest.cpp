#include "Dice.h"
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {
	dice d1(time(0));
	dice d2(time(0));
	int rolls;
	int totals[13] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int rollTotal = 0;

	cout << "How many rolls: ";
	cin >> rolls;

	int i = 0;
	while (i < rolls) {
		d1.diceRoll();
		d2.diceRoll();
		rollTotal = (d1.getV() + d2.getV());
		totals[rollTotal]++;
		i++;
	}

	cout << "Roll Value:     Times Rolled:     % Occurence:" << endl;
	cout << right << fixed << showpoint << setprecision(2);

	int j = 2;
	while (j < 13) {
		cout << setw(11) << j << setw(18) << totals[j] << setw(17) << ((double)totals[j] / (double)rolls) * 100.0 << endl;
		j++;
	}
	//cout << "2         " << totals[2] << "            " << ((double)totals[2] / (double)rolls)*100 << endl;

	system("pause");
	return 0;
}