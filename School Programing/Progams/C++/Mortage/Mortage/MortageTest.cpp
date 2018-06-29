#include "Mortage.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	mortage m;

	double loan;
	double rate;
	int years;


	cout << "Enter the loan amount: ";
	cin >> loan;
	cout << "Enter the interest rate: ";
	cin >> rate;
	cout << "Enter the number of years of the loan: ";
	cin >> years;

	m.setLoan(loan);
	m.setRate(rate);
	m.setYears(years);

	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly Payment: $" << m.getPayment() << endl;
	cout << "Total Pay Back: $" << m.getTotal() << endl;

	system("pause");
	return 0;
}