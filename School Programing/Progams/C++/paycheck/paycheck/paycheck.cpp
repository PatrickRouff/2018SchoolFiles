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
	fout.open("paycheck.txt");
	
	string name;
	double gross;
	double netpay;
	
	double fedtax = 0.15;
	double statetax = 0.035;
	double sstax = 0.0575;
	double medtax = 0.0275;
	double pensiontax = 0.05;
	double healthcarecost = 75.0;
	
	double fedin;
	double statein;
	double ssin;
	double medin;
	double pensionin;
	
	cout<<"Employee Name: ";
	cin>>name;
	cout<<"Gross Paycheck: ";
	cin>>gross;
	
	fedin = fedtax*gross;
	statein = statetax*gross;
	ssin = sstax*gross;
	medin = medtax*gross;
	pensionin = pensiontax*gross;
	
	netpay = gross - (fedin+statein+ssin+medin+pensionin+healthcarecost);
    
    //cout<<endl<<name<<netpay; //for debugging
    
    fout<<name<<endl;
    fout<<setfill('.');
    fout<<fixed<<showpoint<<setprecision(2);
    fout<<left<<setw(40)<<"Gross Amount: "<<right<<setw(15)<<gross<<endl;
	fout<<left<<setw(40)<<"Federal Tax: "<<right<<setw(15)<<fedin<<endl;
    fout<<left<<setw(40)<<"State Tax: "<<right<<setw(15)<<statein<<endl;	
    fout<<left<<setw(40)<<"Social Security Tax: "<<right<<setw(15)<<ssin<<endl;
	fout<<left<<setw(40)<<"Medicare/Medicaid Tax: "<<right<<setw(15)<<medin<<endl;
	fout<<left<<setw(40)<<"Pension Plan: "<<right<<setw(15)<<pensionin<<endl;
	fout<<left<<setw(40)<<"Health Insurance: "<<right<<setw(15)<<healthcarecost<<endl;
	fout<<left<<setw(40)<<"Net Pay: "<<right<<setw(15)<<netpay<<endl;

	fout.close();

    return 0;

}