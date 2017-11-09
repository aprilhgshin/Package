#include "OvernightPackage.h"
#include <string>
using namespace std;

OvernightPackage::OvernightPackage(double addFeeOz, const string& userName, const string& add, const string& c, const string& s, const string& ZIP, double& w, double& costOz): Package(userName, add, c, s, ZIP, w, costOz)
{
	setAdditionalFeeOz(addFeeOz);
}

void OvernightPackage::setAdditionalFeeOz(double addFeeOz)
{
	additionalFeeOz = addFeeOz;
}

double OvernightPackage::getAdditionalFeeOz()
{
	return additionalFeeOz;
}

double OvernightPackage::calculateCost(double)
{
	return (getAdditionalFeeOz() + getCostPerOunce())*getWeight();
}