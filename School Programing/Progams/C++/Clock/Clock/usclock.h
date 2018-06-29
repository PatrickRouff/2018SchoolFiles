#pragma once

#include "clock.h"
#include <string>

using namespace std; 

class usclock : public clock {
public:
	void setZone(string z);
	void printTime();
	void setTime(int h, int m, int s);
	void addSec();
	usclock();
	usclock(int h, int m, int s, string z);
private:
	string zone;
};