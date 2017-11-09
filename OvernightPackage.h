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
	OvernightPackage();
	void setAdditionalFeeOz();
	double getAdditionalFeeOz();
	double calculateCost(double);
};