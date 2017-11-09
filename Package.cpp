#include "Package.h"
#include <string>
using namespace std;

Package::Package(const string& userName, const string& add, const string& c, const string& s, const string& ZIP, double w, double costOz): name(userName), address(add), city(c), state(s), ZIPcode(ZIP)
{
	setWeight(w);
	setCostPerOunce(costOz);
}
void Package::setName(const string& userName)
{
	name = userName;
}
void Package::setAddress(const string& add)
{
	address = add;
}
void Package::setCity(const string& c)
{
	city = c;
}
void Package::setState(const string& s)
{
	state = s;
}
void Package::setZIPcode(const string& ZIP)
{
	ZIPcode = ZIP;
}
void Package::setWeight(double w)
{
	if (w >= 0)
	{
		weight = w;
	}
	else
	{ 
	}
}

void Package::setCostPerOunce(double costOz)
{
	if (costOz >= 0)
	{
		costPerOunce = costOz;
	}
	else
	{
	}
}

void Package::setPackageCost(double pcost)
{
	packageCost = pcost;
}

string Package::getName() const
{
	return name;
}
string Package::getAddress() const
{
	return address;
}
string Package::getCity() const
{
	return city;
}
string Package::getState() const
{
	return state;
}
string Package::getZIPcode() const
{
	return ZIPcode;
}
double Package::getWeight() const
{
	return weight;
}
double Package::getCostPerOunce() const
{
	return costPerOunce;
}
double Package::getPackageCost() const
{
	return packageCost;
}
void Package::calculateCost()
{
	setPackageCost(getWeight()*getCostPerOunce());
}