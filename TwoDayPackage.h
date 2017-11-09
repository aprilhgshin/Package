#pragma once
#define TWODAYPACKAGE_H
#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage : public Package
{
private:
	double flatFee;
public:
	TwoDayPackage(double, const string&, const string&, const string&, const string&, const string&, double&, double&);
	void setFlatFee(double);
	double getFlatFee();
	double calculateCost(double);
};