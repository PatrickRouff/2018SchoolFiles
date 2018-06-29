#pragma once

using namespace std;

class dice {
public:
	dice(int);
	void diceRoll();
	int getV();
private:
	int num;
};