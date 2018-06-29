#include <string>
#include <iostream>
#include "usclock.h"
#include "clock.h"

usclock::usclock(int h, int m, int s, string z) : clock(h, m, s)
{
	zone = z;
}

usclock::usclock() :clock()
{
	zone = "EST";
}

void usclock::setZone(string z) {
	zone = z;
}

void usclock::printTime() {
	clock::printTime();
	cout << " " << zone;
}

void usclock::setTime(int h, int m, int s) {
	clock::setTime(h, m, s);
}

void usclock::addSec() {
	clock::incrementSeconds();
}