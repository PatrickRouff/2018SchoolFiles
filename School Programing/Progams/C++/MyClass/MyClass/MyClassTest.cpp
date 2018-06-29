#include <iostream>
#include <string>
#include "MyClass.h"

using namespace std;

int main() {
	TITAN t[5];
	t[1].changeCore("XA-5489");
	t[1].changeHeight(2.9);
	t[1].addPercentage(56);
	cout << "Core: " << t[0].getCore() << " Height: " << t[0].getHeight() << " Nickname: " << t[0].getNickname() << " Percentage to overcore: " << t[0].getPercent() << endl;
	cout << "Core: " << t[1].getCore() << " Height: " << t[1].getHeight() << " Nickname: " << t[1].getNickname() << " Percentage to overcore: " << t[1].getPercent() << endl;

	if (t[0].canFitUnder(3.0)) {
		cout << t[0].getNickname() << " can fit under here!" << endl;
	} else {
		cout << t[0].getNickname() << " cannot fit under here!" << endl;
	}

	if (t[1].canFitUnder(3.0)) {
		cout << t[1].getNickname() << " can fit under here!" << endl;
	}
	else {
		cout << t[1].getNickname() << " cannot fit under here!" << endl;
	}

	t[1].resetPercentage();
	t[1].useOvercore();
	t[1].addPercentage(100);
	t[1].useOvercore();

	TITAN t2(t[1]);
	cout << "Core: " << t2.getCore() << " Height: " << t2.getHeight() << " Nickname: " << t2.getNickname() << " Percentage to overcore: " << t2.getPercent() << endl;

	system("pause");
	return 0;
}