#include "Employee.h"

//Constructors:
Employee::Employee()
{
	name = "unknown";
	number = 0;
	hireDate = "unknown";
}

Employee::Employee(string empName, int empNum, string dateHire)
{
	name = empName;
	number = empNum;
	hireDate = dateHire;
}

//Setters:
void Employee::setName(string newName)
{
	name = newName;
}

void Employee::setNumber(int newNumber)
{
	number = newNumber;
}

void Employee::setHireDate(string dateHire)
{
	hireDate = dateHire;
}

//Getters:
string Employee::getName() const
{
	return name;
}

int Employee::getNumber() const
{
	return number;
}

string Employee::getHireDate() const
{
	return hireDate;
}

ostream& operator<<(ostream& out, const Employee& obj)
{
	out << "\n\tEmployee Name: " << obj.getName() << "\n\tEmployee Number: " << obj.getNumber() << "\n\tEmployee Hired: " << obj.getHireDate();
	return out;
}