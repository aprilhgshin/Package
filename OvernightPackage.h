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
	OvernightPackage( const string&, const string&, const string&, const string&, const string&, double, double, double);
	void setAdditionalFeeOz(double);
	double getAdditionalFeeOz();
	double calculateCost();
};