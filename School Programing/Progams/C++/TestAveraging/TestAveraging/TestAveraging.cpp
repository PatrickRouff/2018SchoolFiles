#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)
#include <sstream> //stringstream
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)
#include <vector> //for vectors

//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

//Declare Prototypes if needed


int *allocate(int input) {
	int *p2 = new int[input];
	if ((p2 != NULL)) {
		return p2;
	}
	else {
		return NULL;
	}
}

void sortIt(int* p, int elems)
{

	int startPos, minIndex;
	int minValue;

	for (startPos = 0; startPos < (elems - 1); startPos++)
	{
		minIndex = startPos;
		minValue = p[startPos];

		for (int i = startPos + 1; i < elems; i++)
		{
			if (p[i] < minValue)
			{
				minValue = p[i];
				minIndex = i;
			}
		}

		p[minIndex] = p[startPos];
		p[startPos] = minValue;
	}
}

int main()
{
	int *p1;
	int scorenum;
	cout << "How many scores: ";
	cin >> scorenum;
	p1 = allocate(scorenum);

	int i = 0;
	while (i < scorenum) {
		cout << "Enter a score:";
		cin >> p1[i];
		i++;
	}

	sortIt(p1, scorenum);

	cout << " Score" << endl;
	cout << " -----" << endl;

	i = 0;
	double totalave = 0;
	while (i < scorenum) {
		cout << fixed << showpoint << setprecision(2) << right << setw(6) << (double)p1[i] << endl;
		totalave += p1[i];
		i++;
	}

	totalave = totalave / (double)scorenum;
	cout << "Average: " << totalave << endl;


	system("pause");
	return 0;
}