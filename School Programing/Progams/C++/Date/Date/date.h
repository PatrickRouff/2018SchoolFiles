#pragma once
#include <string>
using namespace std;

class date {
public:
	date();
	date(int, int, int);
	void setNames();

	void changeM(int);
	void changeD(int);
	void changeY(int);
	int getM();
	int getD();
	int getY();
	void displayDate1();
	void displayDate2();
	void displayDate3();
private:
	int m;
	int d;
	int y;
	string monthNames[12];
};
