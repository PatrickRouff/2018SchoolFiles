#pragma once
#include <string>
using namespace std;

class TITAN {
public:
	TITAN();
	TITAN(string, double, int);
	TITAN(const TITAN &);
	string getCore();
	double getHeight();
	int getPercent();
	void changeCore(string);
	void changeHeight(double);
	void addPercentage(int);
	void resetPercentage();
	string getNickname();
	bool canFitUnder(double);
	void useOvercore();
private:
	string c;
	double h;
	int p;
};