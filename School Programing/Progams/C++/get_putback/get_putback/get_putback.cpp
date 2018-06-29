//get() cin.get(ch) gets next char in the input stream and stores it in, even if it is a space. 
//putback() cin.putback(ch) lets you put the last char obtained from get() back into the stream. 


#include <iostream>
using namespace std; 

int main() {

	int age = 0; 
	char firstChar = ' ';
	bool good = false;

	while (!good) {
		cout<<"Enter age:";
		cin.get(firstChar);
		//NOTE: ASCII between 48, 57 are 0-9
		if((int)firstChar >= 48 && (int)firstChar <= 57) {
			good=true;
			cin.putback(firstChar); //so can be read with cin. 
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