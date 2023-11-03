#pragma once
#include "Ship.h"
class CargoShip : public Ship
{
private:
	int tonnage;

public:
	//Constructor
	CargoShip();

	//Setters:
	void setTonnage(int tons);

	//Getters
	int getTonnage() const;

	//Print

	virtual void print();
};

