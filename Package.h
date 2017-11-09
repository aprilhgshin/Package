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
public:
	void setName(string);
	void setAddress(string);
	void setCity(string);
	void setState(string);
	void setZIPcode(string);
	void setWeight(double);
	void setCostPerOunce(double);
	string getName();
	string getAddress();
	string getCity();
	string getState();
	string getZIPcode();
	double getWeight();
	double getCostPerOunce();
	double calculateCost(double, double);
};
