#include "TwoDayPackage.h"
#include <string>
using namespace std;

TwoDayPackage::TwoDayPackage(double ffee, const string& userName, const string& add, const string& c, const string& s, const string& ZIP, double& w, double& costOz): Package(userName, add,  c, s, ZIP, w,  costOz)
{
	setFlatFee(ffee);
}
void TwoDayPackage::setFlatFee(double ffee)
{
	flatFee = ffee;
}
double TwoDayPackage::getFlatFee()
{
	return flatFee;
}
double TwoDayPackage::calculateCost(double cost)
{
	return getFlatFee() + getPackageCost();
}