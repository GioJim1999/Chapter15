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
	cout << "\n\tCargo Ship \n";
	cout << "\n\tName			 : " << name << "\n";
	cout << "\n\tYear Built		 : " << yearBuilt << '\n';
	cout << "\n\tMaximum Tonnage : " << tonnage << " tons \n";
}