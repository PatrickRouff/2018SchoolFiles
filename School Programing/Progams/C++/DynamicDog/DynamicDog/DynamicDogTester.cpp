#include "Dog.h"
#include <iostream>

using namespace std;

int main() {
	Dog *dogPTR = new Dog;  //dog object created in dynamic
							//memory (during progam execution)

	(*dogPTR).print();
	dogPTR->setAge(7);
	dogPTR->print();

	delete dogPTR;

	dogPTR = NULL;

	system("pause");
	return 0;
}