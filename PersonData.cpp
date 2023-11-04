#include "PersonData.h"
//Constructor:
PersonData::PersonData()
{
	lastName = "unknown";
	firstName = "unknown";
	address = "unknown";
	city = "unknown";
	state = "unknown";
	zip = "unknown";
	phone = "unknown";
}

PersonData::PersonData(string lName, string fName, string address, string city, string state, string zip, string phone)
{
	this->lastName = lName;
	this->firstName = fName;
	this->address = address;
	this->city = city;
	this->state = state;
	this->zip = zip;
	this->phone = phone;
}

//Setters:
void PersonData::setLastName(string lName)
{
	lastName = lName;
}

void PersonData::setFirstName(string fName)
{
	firstName = fName;
}

void PersonData::setAddress(string address)
{
	this->address = address;
}

void PersonData::setCity(string city)
{
	this->city = city;
}

void PersonData::setState(string state)
{
	this->state = state;
}

void PersonData::setZip(string zip)
{
	this->zip = zip;
}

void PersonData::setPhone(string phone)
{
	this->phone = phone;
}

//Getters:
string PersonData::getLastName() const
{
	return lastName;
}


string PersonData::getFirstName() const
{
	return firstName;
}

string PersonData::getAddress() const
{
	return address;
}

string PersonData::getCity() const
{
	return city;
}

string PersonData::getState() const
{
	return state;
}

string PersonData::getZip()	const
{
	return zip;
}

string PersonData::getPhone() const
{
	return phone;
}

ostream& operator<<(ostream& out, const PersonData& obj)
{
	out << "\n\tCustomer first name:		" << obj.getFirstName();
	out << "\n\tCustomer last name:		" << obj.getLastName();
	out << "\n\tCustomer Address:		" << obj.getAddress();
	out << "\n\tCustomer City:			" << obj.getCity();
	out << "\n\tCustomer State:			" << obj.getState();
	out << "\n\tCustomer Zip:			" << obj.getZip();
	out << "\n\tCustomer Phone:			" << obj.getPhone();

	return out;
}