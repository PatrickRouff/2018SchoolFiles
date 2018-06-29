#include "date.h"
#include <string>
#include <iostream>
using namespace std;

date::date() {
	m = 1;
	d = 1;
	y = 1900;
	setNames();
}

date::date(int im, int id, int iy) {
	bool r1, r2, r3 = false;
	if (im > 0 && im < 13) {
		m = im;
		r1 = true;
	}
	if (id > 0 && id < 32) {
		d = id;
		r2 = true;
	}
	if (iy > 1899) {
		y = iy;
		r3 = true;
	}
	if (!(r1 && r2 && r3)) {
		cout << "Input Error Occured. Date Recall May Fail.";
	}
	setNames();
}

void date::setNames() {
	//monthNames = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	monthNames[0] = "January";
	monthNames[1] = "Febuary";
	monthNames[2] = "March";
	monthNames[3] = "April";
	monthNames[4] = "May";
	monthNames[5] = "June";
	monthNames[6] = "July";
	monthNames[7] = "August";
	monthNames[8] = "September";
	monthNames[9] = "October";
	monthNames[10] = "November";
	monthNames[11] = "December";
}

void date::changeM(int im) {
	bool r1;
	if (im > 0 && im < 13) {
		m = im;
		r1 = true;
	}
	if (!(r1)) {
		cout << "Input Error Occured. Date Recall May Fail.";
	}
}

void date::changeD(int id) {
	bool r1;
	if (id > 0 && id < 31) {
		d = id;
		r1 = true;
	}
	if (!(r1)) {
		cout << "Input Error Occured. Date Recall May Fail.";
	}
}

void date::changeY(int iy) {
	bool r1;
	if (iy > 0) {
		y = iy;
		r1 = true;
	}
	if (!(r1)) {
		cout << "Input Error Occured. Date Recall May Fail.";
	}
}

int date::getM() {
	return m;
}

int date::getD() {
	return d;
}

int date::getY() {
	return y;
}

void date::displayDate1() {
	cout << m << "/" << d << "/" << y << endl;
}

void date::displayDate2() {
	cout << monthNames[(getM() - 1)] << " " << d << ", " << y << endl;
}

void date::displayDate3() {
	cout << d << " " << monthNames[(getM() - 1)] << " " << y << endl;
}