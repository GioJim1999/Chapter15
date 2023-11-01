#pragma once
#include "PersonData.h"
class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;

public:
	//Constructor:
	CustomerData();
	CustomerData(int custNumb, bool isMailingList);

	//Setters:
	void setCustomerNumber(int custNumb);
	void setMailingList(bool list);

	//Getters:
	int getCustomerNumber() const;
	string isMailingList() const;

	//Operators:
	friend ostream& operator<<(ostream& out, const CustomerData& obj);
};

