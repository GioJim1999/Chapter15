#include "ProductionWorker.h"

//Constructors:
ProductionWorker::ProductionWorker()
{
	shift = 0;
	hourlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(int shift, double hourly)
{
	this->shift = shift;
	hourlyPayRate = hourly;
}

//Setters:
void ProductionWorker::setShift(int newShift)
{
	if (newShift < 0 || newShift > 2)
		shift = 0;
	else
		shift = newShift;
}

void ProductionWorker::setHourlyPay(double rate)
{
	if (rate < 0.0)
		hourlyPayRate = 0.0;
	else
		hourlyPayRate = rate;
}

//Getters:
string ProductionWorker::getShift() const
{
	return shiftName[shift];
}

double ProductionWorker::getHourlyPayRate() const
{
	return hourlyPayRate;
}

ostream& operator<<(ostream& out, const ProductionWorker& obj)
{
	out << static_cast<Employee>(obj);
	out << "\n\tEmployee Shift: " << obj.getShift() << "\n\tEmployee Pay Rate: " << setprecision(2) << showpoint << fixed << "$" << obj.getHourlyPayRate() << " per hour";
	return out;
}