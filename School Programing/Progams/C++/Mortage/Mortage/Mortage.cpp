#include "Mortage.h"
#include <cmath>

using namespace std;

mortage::mortage() {
	loan = 0.0;
	rate = 0.0;
	years = 0;
}

void mortage::setLoan(double il) {
	loan = il;
}

void mortage::setRate(double ir) {
	rate = ir;
}

void mortage::setYears(int iy) {
	years = iy;
}

double mortage::getPayment() {
	double term = pow((1 + (rate / 12)), (12 * years));
	//double term = (( 1 + (rate / 12)) ^ (12 * years));
	double pay = ((loan * (rate / 12) * term) / (term - 1));
	return pay;
}

double mortage::getTotal() {
	return (getPayment() * 12 * years);
}