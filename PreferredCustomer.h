#pragma once
#include "CustomerData.h"
class PreferredCustomer : public CustomerData
{
private:
	double purchaseAmount;
	double discountLevel;

public:
	//Constructors:
	PreferredCustomer();
	PreferredCustomer(double purchaseAmt, double discountLvl);

	//Setters:
	void setPurchaseAmount(double amt);
	void setDiscountLevel();

	//Getters:
	double getPurchaseAmount() const;
	double getDiscountLevel() const;

	//Operators:
	friend ostream& operator<<(ostream& out, const PreferredCustomer& obj);
};

