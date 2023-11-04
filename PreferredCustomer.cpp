#include "PreferredCustomer.h"
#include<iomanip>
//Constructors:
PreferredCustomer::PreferredCustomer()
{
	purchaseAmount = 0;
	discountLevel = 0.00;
}

PreferredCustomer::PreferredCustomer(double purchaseAmt, double discountLvl)
{
	purchaseAmount = purchaseAmt;
	discountLevel = discountLvl;
}

//Setters:
void PreferredCustomer::setPurchaseAmount(double amt)
{
	purchaseAmount = amt;
}

void PreferredCustomer::setDiscountLevel()
{
	if (purchaseAmount >= 500.0)
		discountLevel = 0.05;
	else if (purchaseAmount >= 1000.0)
		discountLevel = 0.06;
	else if (purchaseAmount >= 1500.0)
		discountLevel = 0.07;
	else if (purchaseAmount >= 2000)
		discountLevel = 0.1;
	else
		discountLevel = 0.0;
}

//Getters:
double PreferredCustomer::getPurchaseAmount() const
{
	return purchaseAmount;
}

double PreferredCustomer::getDiscountLevel() const
{
	return discountLevel;
}

//Operators
ostream& operator<<(ostream& out, const PreferredCustomer& obj)
{
	out << static_cast<CustomerData>(obj);
	out << setprecision(2) << showpoint << fixed << "\n\tCustomer purchase Amount:	$" << obj.getPurchaseAmount();
	out << "\n\tDiscount Level:			" << obj.getDiscountLevel() * 100 << "%";

	return out;
}