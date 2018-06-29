/*
Vectors are resizable arrays.
They are good for arrays of undetermined length.

Unlike arrays, which are automatically passed to a function by reference
(the address is passed, so the original can be changed), vectors are passed
to functions by value (a copy of the vector is made).

To avoid copying large vectors, you can use & to pass a vector by reference.
If you do not want a function to modify a vector, use const.

*/

#include <iostream>
#include <vector>
// for vectors
#include <Windows.h>			// need for Sleep()

using namespace std;

//***********************************

// use '&' if want function to change vector, otherwise use const or leave out '&'
void fill(vector<int> &v) {
	for (int x = 0; x < v.size(); x++) {
		cout << "Enter Element #" << x << ":";
		cin >> v[x];
	}
}

//***********************************

//display any vector with spaces between elements

template <typename any>

void display(const vector<any> &v) {
	for (int x = 0; x < v.size(); x++) {
		cout << v[x] << " ";
	}
	cout << endl << endl;
}

//***********************************

int main()
{
	vector<int> v1; //size 0, empty
	vector<int> v2(5); //size 5 , uninitialized
	vector<int> v3(3,7);//size 3, all initialized to 7

	cout << "vector 1:" << endl;
	display(v1);
	cout << "vector 2:" << endl;
	display(v2);
	cout << "vector 3:" << endl;
	display(v3);

	cout << "How many buckets do you want for vector 1? ";
	int numInt;
	cin >> numInt;
	//size vector to user defined size
	v1.resize(numInt);
	fill(v1);
	display(v1);

	cout << "Resize vector 2 to how many buckets? ";
	cin >> numInt;

	//resize vector to user defined size
	v2.resize(numInt);
	fill(v2);
	display(v2);

	cout << "Adding 1 more bucket to vector 2: " << endl;
	v2.resize(v2.size() + 1);

	cout << "What number do you want in last bucket: " << endl;
	int inNum;
	cin >> inNum;
	v2[v2.size() - 1] = inNum;
	display(v2);

	Sleep(3000);

	cout << "Remove the last bucket.  Careful!  That data is lost." << endl;
	v2.resize(v2.size() - 1);
	cout << "vector 2" << endl;
	display(v2);

	Sleep(3000);

	cout << "Make a fourth vector the same size as the third and set it equal to the third" << endl;
	vector<int> v4(v3.size());
	v4 = v3; //CANNOT DO THIS WITH ARRAYS

	cout << "vector 3:" << endl;
	display(v3);

	cout << "vector 4:" << endl;
	display(v4);

	system("pause");
	return 0;
}