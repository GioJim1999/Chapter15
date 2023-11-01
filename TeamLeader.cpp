#include "TeamLeader.h"

//Constructors:
TeamLeader::TeamLeader()
{
	monthlyBonus = 0.0;
	requiredTrainingHours = 0;
	completedTrainingHours = 0;
}

TeamLeader::TeamLeader(double bonus, int requiredHours, int completedHours)
{
	monthlyBonus = bonus;
	requiredTrainingHours = requiredHours;
	completedTrainingHours = completedHours;
}

//Setters:
void TeamLeader::setMonthlyBonus(double bonus)
{
	if (bonus < 0.0)
		monthlyBonus = 0.0;
	else
		monthlyBonus = bonus;
}

void TeamLeader::setRequiredHours(int requiredHours)
{
	if (requiredHours < 0)
		requiredTrainingHours = 0;
	else
		requiredTrainingHours = requiredHours;
}

void TeamLeader::setCompletedHours(int completedHours)
{
	if (completedHours < 0)
		completedTrainingHours = 0;
	else
		completedTrainingHours = completedHours;
}

//Getters:
double TeamLeader::getMonthlyBonus() const
{
	return monthlyBonus;
}

int TeamLeader::getRequiredHours() const
{
	return requiredTrainingHours;
}

int TeamLeader::getCompletedHours() const
{
	return completedTrainingHours;
}

ostream& operator<<(ostream& out, const TeamLeader& obj)
{
	out << static_cast<ProductionWorker>(obj);
	out << "\n\tTeam Leader Bonus: " << setprecision(2) << showpoint << fixed << "$" << obj.getMonthlyBonus();
	out << "\n\tTeam Leader required training hours: " << obj.getRequiredHours();
	out << "\n\tTeam Leader completed training hours: " << obj.getCompletedHours();
	return out;
}