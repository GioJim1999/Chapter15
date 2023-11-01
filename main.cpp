//Giovanni Jimenez
//11-3-2023
//Chapter 15 - Assignments
//CMPR 121

#include<iostream>
#include"input.h"
#include"TeamLeader.h"
#include"MilTime.h"
#include"Time.h"
#include"Essay.h"
#include"CustomerData.h"
using namespace std;

//Function prototypes:
int menuOption();
void Challenge3();
void Challenge4();
void Challenge6();
void Challenge7();

int main()
{
	do
	{
		system("cls");
		switch (menuOption())
		{
		case 0: 
			exit(1); break;
		case 3:
			Challenge3(); break;
		case 4:
			Challenge4(); break;
		case 6: 
			Challenge6(); break;
		case 7:
			Challenge7(); break;
		}

	} while (true);

	return EXIT_SUCCESS;
}

int menuOption()
{
	cout << "\n\tChapter 15 Assignments - Giovanni Jimenez";
	cout << "\n\t-----------------------------------------";
	cout << "\n\t3. Challenge 3 - Team Leader Class";
	cout << "\n\t4. Challenge 4 - Time Format";
	cout << "\n\t6. Challenge 6 - Essay Class";
	cout << "\n\t7. Challenge 7 - Person Data and Customer Data Class";
	cout << "\n\t8. Challenge 8 - ";
	cout << "\n\t12. Challenge 12 - ";
	cout << "\n\t-----------------------------------------";
	cout << "\n\t0. Exit";

	return inputInteger("\n\tOption: ", 0, 12);
}

void Challenge3()
{
	system("cls");
	cout << "Challenge 3 - Team Leader Class";
	cout << "\n\t-----------------------------------------\n";

	cout << "\n\tEmployee Team Leader Information: ";
	cout << "\n\t-----------------------------------------";
	TeamLeader leader1(1000.00, 2, 5);

	leader1.setName("Giovanni Jimenez");
	leader1.setNumber(110293);
	leader1.setHireDate("11-3-2023");
	leader1.setShift(1);
	leader1.setHourlyPay(25.00);

	cout << '\n' << leader1 << '\n';

	cout << '\n';
	system("pause");
}

void Challenge4()
{
	system("cls");
	cout << "\n\tChallenge 4 - Time Format";
	cout << "\n\t-----------------------------------------";
	MilTime time;

	time.setTime(434, 124);

	cout << "\nMILITARY TIME: ";
	cout << "\nHours: " << time.getHour();

	cout << "\nSTD TIME: ";

	Time time2;

	time2 = time.getStandHr();

	cout << "\nHours: " << time2.getHours();
	cout << "\nMinutes: " << time2.getMin();
	cout << "\nSec: " << time2.getSec();

	cout << "\n";
	system("pause");
}

void Challenge6()
{
	system("cls");
	cout << "\n\tChallenge 6 - Essay Class";
	cout << "\n\t-----------------------------------------\n";
	int grammar = inputInteger("\n\tEnter grammar grade (0...30): ", 0, 30);
	int spelling = inputInteger("\n\tEnter spelling grade (0...20): ", 0, 20);
	int length = inputInteger("\n\tEnter the length grade (0...20):	", 0, 20);
	int content = inputInteger("\n\tEnter the content grade (0...30): ", 0, 30);

	Essay essay1(grammar, spelling, length, content);

	cout << "\n\tLetter Grade: " << essay1.getEssayGrade();
	cout << "\n\tPoints earned: " << essay1.getScore();

	
	cout << '\n';
	system("pause");
}

void Challenge7()
{
	system("cls");
	cout << "\n\tChallenge 7 - Person Data and Customer Date Class";
	cout << "\n\t-----------------------------------------\n";
	string lastName, firstName, address, city, state, zip, phone;
	lastName = inputString("\n\tEnter Customer's last name: ", true);
	firstName = inputString("\n\tEnter Customer's first name: ", true);
	address = inputString("\n\tEnter Customer's address: ", true);
	city = inputString("\n\tEnter Customer's city: ", true);
	state = inputString("\n\tEnter Customer's state: ", true);
	zip = inputString("\n\tEnter Customer's Zip: ", true);
	phone = inputString("\n\tEnter Customer's Phone: ", true);
	int customerNumber = inputInteger("\n\tEnter the Customer number: ", true);
	bool isMailingList = inputInteger("\n\tIs Customer on mailing list (0 for no) (1 for yes): ", 0, 1);

	CustomerData customer(customerNumber, isMailingList);
	customer.setLastName(lastName);
	customer.setFirstName(firstName);
	customer.setAddress(address);
	customer.setCity(city);
	customer.setState(state);
	customer.setZip(zip);
	customer.setPhone(phone);

	system("cls");
	cout << "\n\tCustomer Data:	";
	cout << "\n\t-----------------------------------------\n";
	cout << customer << "\n";

	cout << "\n";
	system("pause");
}