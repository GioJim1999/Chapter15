#pragma once
#include "Time.h"
class MilTime : public Time
{
private:
	int milHours;
	int milSeconds;

public:
	//Constructors:
	MilTime();

	//Setters:
	void setTime(int hours, int sec);

	//Getters:
	int getHour() const;

	Time getStandHr();
};

