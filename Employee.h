#pragma once
#include<string>
#include<iostream>
using namespace std;

class Employee
{
private:
	string name;
	int number;
	string hireDate;

public:
	//Constructors
	Employee();
	Employee(string empName, int empNum, string dateHire);

	//Setters:
	void setName(string newName);
	void setNumber(int newNumber);
	void setHireDate(string dateHire);

	//Getters:
	string getName() const;
	int getNumber() const;
	string getHireDate() const;

	friend ostream& operator<<(ostream& out, const Employee& obj);
};

