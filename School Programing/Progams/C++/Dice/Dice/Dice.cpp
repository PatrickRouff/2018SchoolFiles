#include "Dice.h"
#include <Windows.h>

using namespace std;

dice::dice(int s) {
	srand(s);
	num = 0;
}

void dice::diceRoll() {
	num = (rand() % 6)+1;
}

int dice::getV() {
	return num;
}