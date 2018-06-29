#include <iostream> // cin,cout,getline,ignore
#include <Windows.h> // random uses (Sleep, etc.)
#include <time.h> //random uses (rand, etc.)

//Built by Patrick Rouff
//Three Doors Problem

using namespace std;

//Times to Run
const int ttr = 1000000000;

//Declare Prototypes if needed

int main()
{
	int prize;
	int choice;
	int i = 0;
	int remove;
	int temp;
	double hits = 0;

	srand(time(0));

	cout << "Times Ran: " << ttr << endl;

	while (i < ttr) {
		
		//Randomizes the input.
		prize = rand() % 3;
		choice = rand() % 3;
		remove = rand() % 3;

		//forcefully prevents remove from being the prize door or the choice door.
		while (remove == choice || remove == prize) {
			remove = rand() % 3;
		}

		//Switches choice from the original choice door, while insuring it is not the removed door.
		temp = choice;
		while (choice == temp || choice == remove) {
			choice = rand() % 3;
		}

		//Records the hit if you get the prize.
		if (choice == prize) {
			hits++;
		}
		i++;
	}
	cout << "Switch Hits: " << hits/ttr;

	cout << endl;

	hits = 0.0;
	i = 0;

	while (i < ttr) {

		//Randomizes the input.
		prize = rand() % 3;
		choice = rand() % 3;
		remove = rand() % 3;

		//forcefully prevents remove from being the prize door or the choice door.
		while (remove == choice || remove == prize) {
			remove = rand() % 3;
		}

		//Switches choice from the original choice door, while insuring it is not the removed door.
		//THIS TIME COMMENTED OUT
		/*temp = choice;
		while (choice == temp || choice == remove) {
			choice = rand() % 3;
		}*/

		//Records the hit if you get the prize.
		if (choice == prize) {
			hits++;
		}
		i++;
	}
	cout << "Stay Hits: " << hits / ttr;

	cout << endl;

	system("pause");
	return 0;
}
