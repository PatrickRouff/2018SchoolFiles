#include <string>
#include <iostream>
#include "MyClass.h"

using namespace std;

TITAN::TITAN() {
	c = "BT-7274";
	h = 3.2;
	p = 0;
}

TITAN::TITAN(string ic, double ih, int ip) {
	c = ic;
	h = ih;
	p = ip;
}

TITAN::TITAN(const TITAN &i) {
	c = i.c;
	h = i.h;
	p = i.p;
}

string TITAN::getCore() {
	return c;
}

double TITAN::getHeight() {
	return h;
}

int TITAN::getPercent() {
	return p;
}

void TITAN::changeCore(string ic) {
	c = ic;
}

void TITAN::changeHeight(double ih) {
	h = ih;
}

void TITAN::addPercentage(int ip) {
	p += ip;
}

void TITAN::resetPercentage() {
	p = 0;
}

string TITAN::getNickname() {
	string out = "";
	out += c[0];
	out += c[1];
	return out;
}

bool TITAN::canFitUnder(double ih) {
	if (h < ih) {
		return true;
	} else {
		return false;
	}
}

void TITAN::useOvercore() {
	if (p >= 100) {
		cout << c << " OVERCORE USED" << endl;
		p = 0;
	} else {
		cout << "Overcore not charged. Cannot use overcore." << endl;
	}
}