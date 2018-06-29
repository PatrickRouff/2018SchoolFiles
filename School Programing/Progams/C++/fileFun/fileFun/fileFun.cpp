#include <iostream> // cin,cout,getline,ignore
#include <string> //getline, for formating fuctions with ()
#include <iomanip> //setprecision, setw, setfill, etc.
#include <cmath> //for pow function
#include <fstream> //write to and read from files (instead of console)

//http://cpp.sh/
//https://sites.google.com/a/rsdmo.org/maricickimberly/home/c-programming

using namespace std;

int main () 
{
	//s.2 declare file stream varibles. 
	
	ifstream fin; //input file stream
	ofstream fout; //out file stream
	
	//fin fout are vars, can change. 
	
	const double PI = 3.14159;
	string user = "", item = "";
	double diam = 0, area = 0;
	
	fin.open("circledata.txt"); //open for reading
	
	fout.open("circleoutput.txt"); //open for writing, will erase current, unless appended. 
	
	//s.4 use file stream vars with >>,<< or other I/O functions
	
	getline(fin,user); //get first line of data- store in User. 
	fout<<"Circle Data For: "<<user<<endl<<endl<<endl;
	fout<<left<<setw(20)<<"Item"<<right<<setw(15)<<"Area"<<endl;
	fout<<setw(35)<<setfill('_')<<"_"<<endl<<endl;
	
	fout<<fixed<<showpoint<<setprecision(3);
	fout<<setfill(' ');
	
	while (!fin.eof()) //while not end of fin file.
	{
		getline(fin,item);
		fin>>diam;
		fin.ignore(80, '\n');
		
		area= PI*pow(diam/2.0,2);
		
		fout<<left<<setw(20)<<item<<right<<setw(15)<<area<<endl;
	}
	
	//s.5 close files. 
	fin.close();
	fout.close();
	
    return 0;

}