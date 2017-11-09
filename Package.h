#pragma once
#define PACKAGE_H
#include <string>
using namespace std;

class Package
{
private:
	string name;
	string address;
	string city;
	string state;
	string ZIPcode;
	double weight;
	double costPerOunce;
	double packageCost;

public:
	Package(const string&, const string&, const string&, const string&, const string&, double, double);
	void setName(const string&);
	void setAddress(const string&);
	void setCity(const string&);
	void setState(const string&);
	void setZIPcode(const string&);
	void setWeight(double);
	void setCostPerOunce(double);
	void setPackageCost(double);
	string getName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getZIPcode() const;
	double getWeight() const;
	double getCostPerOunce() const;
	double getPackageCost() const;
	void calculateCost();
};
