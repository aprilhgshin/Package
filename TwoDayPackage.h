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
	void setFlatFee(double);
	double getFlatFee();
	double calculateCost(double);
};