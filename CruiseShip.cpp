#include "CruiseShip.h"
//Constructors:
CruiseShip::CruiseShip() : Ship()
{
	maxPassengers = 0;
}

CruiseShip::CruiseShip(int maxPassengers)
{
	this->maxPassengers = maxPassengers;
}

//Setter:
void CruiseShip::setPassengers(int maxPassengers)
{
	this->maxPassengers = maxPassengers;
}

//Getters:
int CruiseShip::getPassengers() const
{
	return maxPassengers;
}

void CruiseShip::print()
{
	cout << "\n\tCruise Ship: \n";
	cout << "\n\tName						  : " << name << '\n';
	cout << "\n\tYear built					  : " << yearBuilt << "\n";
 	cout << "\n\tMaximum number of passengers : " << maxPassengers << '\n';
}