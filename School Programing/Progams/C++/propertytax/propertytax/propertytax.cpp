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
	
	ofstream fout;
	fout.open("propertytax.txt");
	
	double value;
	double taxable;
	double rate = 0.0105;
	double total;
	
	cout<<"Assesed Value: ";
	cin>>value;
	
	taxable = value * 0.92;
	total = taxable * rate;
	
	fout<<setfill('-');
	fout<<right<<setw(27)<<"Property Tax Data"<<left<<setw(10)<<'-';
	fout<<endl;
	fout<<setfill('_');
	fout<<right<<setw(37)<<'_';
	fout<<endl;
	fout<<setfill(' ');
	fout<<fixed<<showpoint<<setprecision(2);
	fout<<left<<setw(27)<<"Assesed Value: "<<right<<setw(10)<<value<<endl;
	fout<<left<<setw(27)<<"Taxable Amount: "<<right<<setw(10)<<taxable<<endl;
    fout<<left<<setw(27)<<"Rate: "<<right<<setw(10)<<rate*100<<endl;	
    fout<<left<<setw(27)<<"Property Tax: "<<right<<setw(10)<<total<<endl;
    
    fout.close();
    
    return 0;

}