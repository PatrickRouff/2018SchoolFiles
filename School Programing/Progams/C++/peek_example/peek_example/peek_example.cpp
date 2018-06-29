//get() cin.get(ch) gets next char in the input stream and stores it in, even if it is a space. 
//putback() cin.putback(ch) lets you put the last char obtained from get() back into the stream. 
//peek() looks at the next char in the input stream, peek does NOT remove it, so no need to put back. 

#include <iostream>
using namespace std; 

int main() {

	int age = 0; 
	char firstChar = ' ';
	bool good = false;

	while (!good) {
		cout<<"Enter age:";
		firstChar = cin.peek();
		//NOTE: ASCII between 48, 57 are 0-9
		if((int)firstChar >= 48 && (int)firstChar <= 57) {
			good=true;
			cin>>age;
		}
		else {
			good=false;
			cin.ignore(80,'\n');
		}
	}

	cout<<"Your age is "<<age<<endl;
	return 0;

}