#pragma once
#include "Ship.h"
class CruiseShip : public Ship
{
private:
	int maxPassengers;

public:
	//Constructors:
	CruiseShip();
	CruiseShip(int maxPassengers);

	//Setters:
	void setPassengers(int maxPassengers);

	//Getters:
	int getPassengers() const;

	//Print
	virtual void print();
};

