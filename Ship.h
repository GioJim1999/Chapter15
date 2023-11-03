#pragma once
#include <string>
#include<iostream>
using namespace std;
class Ship
{
protected:
	string name;
	string yearBuilt;

public:
	//Constructors:
	Ship();
	Ship(string name, string yearBuilt);

	//Setters:
	void setShipName(string name);
	void setYearBuilt(string year);

	//Getters:
	string getShipName() const;
	string getYearBuilt() const;

	//Print Function:
	virtual void print();
};

