#pragma once

using namespace std;

class card {
public:
	card();
	char getS();
	char getT();
	int getV();
	void deal();
	void show();
private:
	char suit;
	char type;
	int value;
};