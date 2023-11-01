#include "CustomerData.h"
//Constructor:
CustomerData::CustomerData()
{
	customerNumber = 0;
	mailingList = false;
}

CustomerData::CustomerData(int custNumb, bool isMailingList)
{
	customerNumber = custNumb;
	mailingList = isMailingList;
}

//Setters:
void CustomerData::setCustomerNumber(int custNumb)
{
	customerNumber = custNumb;
}

void CustomerData::setMailingList(bool list)
{
	mailingList = list;
}

//Getters:
int CustomerData::getCustomerNumber() const
{
	return customerNumber;
}

string CustomerData::isMailingList() const
{
	if (mailingList)
		return "Yes";
	else
		return "No";
}

//Operator:
ostream& operator<<(ostream& out, const CustomerData& obj)
{
	out << static_cast<PersonData>(obj);
	out << "\n\tCustomer Number: " << obj.getCustomerNumber();
	out << "\n\tIs on mailing list: " << obj.isMailingList();
	return out;
}