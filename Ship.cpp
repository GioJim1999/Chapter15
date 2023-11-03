#include "Ship.h"
//Constructors:
Ship::Ship()
{
	name = "unknown";
	yearBuilt = "unknown";
}

Ship::Ship(string name, string yearBuilt)
{
	this->name = name;
	this->yearBuilt = yearBuilt;
}

//Setters:
void Ship::setShipName(string name)
{
	this->name = name;
}

void Ship::setYearBuilt(string year)
{
	yearBuilt = year;
}

//Getters:
string Ship::getShipName() const
{
	return name;
}

string Ship::getYearBuilt() const
{
	return yearBuilt;
}

void Ship::print()
{
	cout << "\n\tShip:\n";
	cout << "\n\tName		:" << name << "\n";
	cout << "\n\tYear Built	:" << yearBuilt << "\n";
}