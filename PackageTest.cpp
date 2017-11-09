#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	const string name = "April";
	const string address = "519 Palm Dr. Apt. 13";
	const string city = "Glendale";
	const string state = "CA";
	const string ZIPcode = "91202-0245";
	OvernightPackage night(name, address, city, state, ZIPcode, 6.0 , 2.0, 3.0);

	cout << "User information obtained by get functions: " << endl
		<< "Name: " << night.getName() << endl
		<< "Address: " << night.getAddress() << endl
		<< "City: " << night.getCity() << endl
		<< "State: " << night.getState() << endl
		<< "ZIP Code: " << night.getZIPcode() << endl;

	TwoDayPackage twoDay(4.0, name, address, city, state, ZIPcode, 10.0, 7.0);
	cout << "User information obtained by get functions: " << endl
		<< "Name: " << twoDay.getName() << endl
		<< "Address: " << twoDay.getAddress() << endl
		<< "City: " << twoDay.getCity() << endl
		<< "State: " << twoDay.getState() << endl
		<< "ZIP Code: " << twoDay.getZIPcode() << endl
		<< "Two day package cost: " << twoDay.calculateCost() << endl;

	system("PAUSE");
	return 0;   
} 