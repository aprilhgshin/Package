#pragma once
#define OVERNIGHTPACKAGE_H
#include "Package.h"
#include <string>
using namespace std;

class OvernightPackage : public Package
{
private:
	double additionalFeeOz;
public:
	OvernightPackage(double, const string&, const string&, const string&, const string&, const string&, double&, double&);
	void setAdditionalFeeOz(double);
	double getAdditionalFeeOz();
	double calculateCost(double);
};