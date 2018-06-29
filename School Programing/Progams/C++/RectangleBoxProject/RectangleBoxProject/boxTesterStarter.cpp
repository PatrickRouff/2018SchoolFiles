// modified from D.S. Malik example

#include <iostream>                                        
#include <iomanip>
#include "box.h"
#include "rectangle.h"
//
//


using namespace std;

int main()
{
	rectangle yard;

	double fenceCostPerFoot;
	double fertilizerCostPerSquareFoot;
	double length, width;
	double billingAmount;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the length and width of the "
		<< "yard (in feet): ";
	cin >> length >> width;

	yard.setDimension(length, width);
	yard.print();
	//

	cout << "\n\nEnter the cost of fence "
		<< "(per foot): $";
	cin >> fenceCostPerFoot;

	cout << "\nEnter the cost of fertilizer "
		<< "(per square foot): $";
	cin >> fertilizerCostPerSquareFoot;

	billingAmount = (yard.perimeter()*fenceCostPerFoot) + (yard.area()*fertilizerCostPerSquareFoot);

	cout << "\nAmount due: $" << billingAmount << endl << endl;

	//////////////////////////////////////////////////////

	// default constructor
	box p1;

	double height;
	double wrappingCostPerSquareFeet;

	cout << "Enter the length, width, and height "
		<< "of  package #1 (in feet): " << endl;

	cin >> length >> width >> height;

	p1.setDimension(length, width, height);          

	cout << "\nEnter the cost (25 to 50 cents) of "
		<< "wrapping per square foot: ";

	cin >> wrappingCostPerSquareFeet;

	billingAmount = (p1.area()*wrappingCostPerSquareFeet / 100);

	cout << "\nAmount due: $" << billingAmount << endl << endl;

	//////////////////////////////////////////////////////

	cout << "\nPackage #2: \n\n";
	box p2(3, 4, 5);
	//
	p2.print();
	//
	
	cout << "\n\nVolume: " << p2.volume() << endl << endl;

	system("pause");
	return 0;
}