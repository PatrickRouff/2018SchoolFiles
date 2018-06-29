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
	ifstream fin;
	
	string name, occ, age;
	
	cout<<"Enter Full Name: ";
	getline(cin, name);
	cout<<"Occupation: ";
	getline(cin, occ);
	cout<<"Age: ";
	getline(cin, age);
	
	cout<<endl<<endl<<endl;
	
	cout<<"Total Ticket Sales for : "<<name<<endl;
	cout<<"Occupation: "<<occ<<endl;
	cout<<"Age: "<<age<<endl;
	
	cout<<setfill('=');
	cout<<right<<setw(50)<<"="<<endl;
	cout<<setfill(' ');
	cout<<"Ticket Price"<<setw(38)<<"Number Sold"<<endl;
	cout<<setfill('=');
	cout<<right<<setw(50)<<"="<<endl;
	cout<<setfill(' ');
	fin.open("ticketsale.txt");
	
	int price, ticket, totalprice = 0; 
	
	while (!fin.eof()) {
	string ivar;
	fin>>price>>ticket;
	cout<<"$"<<left<<setw(25)<<price<<right<<setw(24)<<ticket<<endl;
	
	totalprice += (price*ticket);
		
	}

	cout<<setfill('=');
	cout<<right<<setw(50)<<"="<<endl;
	cout<<setfill(' ');
	
	cout<<"Gross Revenue: $"<<totalprice<<endl;

   return 0;

}