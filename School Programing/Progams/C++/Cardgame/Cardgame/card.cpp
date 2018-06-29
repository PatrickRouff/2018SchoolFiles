#include "card.h"
#include <Windows.h>
#include <time.h> 
#include <iostream>
using namespace std;

card::card() {
	srand(time(0));
}

char card::getS() {
	return suit;
}

char card::getT() {
	return type;
}

int card::getV() {
	return value;
}

void card::show() {
	cout << type << "   " << suit;
}

void card::deal() {
	srand(time(0));
	//cout << time(0);
	int num = 0;
	num = (rand() % 4) + 1;
	//cout << num << endl;
	switch (num) {
	case 1: suit = (char)3;
		break;
	case 2: suit = (char)4;
		break;
	case 3: suit = (char)5;
		break;
	case 4: suit = (char)6;
		break;
	}
	//cout << suit << endl;
	num = (rand() % 13) + 1;
	switch (num) {
	case 1: type = 'A';
		value = 11;
		break;
	case 2: type = '2';
		value = 2;
		break;
	case 3: type = '3';
		value = 3;
		break;
	case 4: type = '4';
		value = 4;
		break;
	case 5: type = '5';
		value = 5;
		break;
	case 6: type = '6';
		value = 6;
		break;
	case 7: type = '7';
		value = 7;
		break;
	case 8: type = '8';
		value = 8;
		break;
	case 9: type = '9';
		value = 9;
		break;
	case 10: type = 'X';
		value = 10;
		break;
	case 11: type = 'J';
		value = 10;
		break;
	case 12: type = 'Q';
		value = 10;
		break;
	case 13: type = 'K';
		value = 10;
		break;
	}
}