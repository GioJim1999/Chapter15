#pragma once
#include<string>
#include<iostream>
using namespace std;
class PersonData
{
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:
	//Constructor
	PersonData();
	PersonData(string lName, string fName, string address, string city, string state, string zip, string phone);

	//Setters:
	void setLastName(string lName);
	void setFirstName(string fName);
	void setAddress(string address);
	void setCity(string city);
	void setState(string state);
	void setZip(string zip);
	void setPhone(string phone);

	//Getters:
	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;	
	string getCity() const;
	string getState() const;
	string getZip()	const;
	string getPhone() const;

	//Operators:
	friend ostream& operator<<(ostream& out, const PersonData& obj);
};

