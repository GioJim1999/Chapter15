#pragma once
#include"Employee.h"
#include<iomanip>
class ProductionWorker : public Employee
{
	string shiftName[3] = { "Unknown", "Day", "Night" };

private:
	int shift;
	double hourlyPayRate;

public: 
	//Constructors:
	ProductionWorker();
	ProductionWorker(int shift, double hourly);

	//Setters:
	void setShift(int newShift);
	void setHourlyPay(double rate);

	//Getters:
	string getShift() const;
	double getHourlyPayRate() const;

	friend ostream& operator<<(ostream& out, const ProductionWorker& obj);
};

