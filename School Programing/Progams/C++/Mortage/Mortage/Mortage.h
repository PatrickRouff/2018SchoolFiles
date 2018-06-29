#pragma once

using namespace std;

class mortage {
public:
	mortage();
	void setLoan(double);
	void setRate(double);
	void setYears(int);
	double getPayment();
	double getTotal();
private:
	double loan;
	double rate;
	int years;
};