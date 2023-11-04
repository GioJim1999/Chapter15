#include "CargoShip.h"
//Constructor
CargoShip::CargoShip() : Ship()
{
	tonnage = 0;
}

//Setters:
void CargoShip::setTonnage(int tons)
{
	tonnage = tons;
}

//Getters:
int CargoShip::getTonnage() const
{
	return tonnage;
}

void CargoShip::print()
{
	cout << "\n\tCargo Ship";
	cout << "\n\tName:						 " << name;
	cout << "\n\tYear Built:					 " << yearBuilt;
	cout << "\n\tMaximum Tonnage:				 " << tonnage << " tons\n";
}