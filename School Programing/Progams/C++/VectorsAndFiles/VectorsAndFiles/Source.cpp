#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// false means only 1 piece of string data per line
bool multiData = false;

//***********************************
void fill(ifstream &inData, vector<string> &v){
	while (!inData.eof()) {
		v.resize(v.size() + 1); // keep resizing as add data
		if (!multiData) {
			getline(inData, v[v.size() - 1]); //single data per line
		} else {
			inData >> v[v.size() - 1]; //lines seperated by spaces
		}
	}
}
//***********************************

// template
template<typename any>

void display(const vector <any> &v){
	cout << "<";
	for (int x = 0; x < v.size(); x++) {
		if (x != v.size() - 1) {
			cout << v[x] << ",  ";
		} else {
			cout << v[x] << ">";
		}
	}
	cout << endl << endl;
}
//***********************************

int main(){
	ifstream fin;
	vector<string> v1;
	vector<string> v2;
	vector<string> v3;

	cout << "\nFilling vector 1 from file with single data per line (string):" << endl;
	fin.open("singleData.txt");
	multiData = false;
	fill(fin, v1);
	display(v1);
	fin.close();

	cout << "\nFilling vector 2 from file with multiple data per lines using same method:" << endl << endl;
	fin.open("multiData.txt");
	multiData = false;
	fill(fin, v2);
	display(v2);
	fin.close();

	cout << "\nLet's try multi-data per line again with different method:" << endl << endl;
	fin.open("multiData.txt");
	multiData = true;
	fill(fin, v3);
	display(v3);
	fin.close();





	system("pause");
	return 0;
}