#pragma once
#include "ProductionWorker.h"
class TeamLeader : public ProductionWorker
{
private:
	double monthlyBonus;
	int requiredTrainingHours;
	int completedTrainingHours;

public:
	//Constructors:
	TeamLeader();
	TeamLeader(double bonus, int requiredHours, int completedHours);

	//Setters:
	void setMonthlyBonus(double bonus);
	void setRequiredHours(int requiredHours);
	void setCompletedHours(int completedHours);

	//Getters:
	double getMonthlyBonus() const;
	int getRequiredHours() const;
	int getCompletedHours() const;

	friend ostream& operator<<(ostream& out, const TeamLeader& obj);
};

