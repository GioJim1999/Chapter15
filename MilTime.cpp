#include "MilTime.h"

//Constructors:
MilTime::MilTime()
{
	milHours = 0;
	milSeconds = 0;
}

void MilTime::setTime(int hours, int sec)
{
	milHours = hours;
	milSeconds = sec;
}

int MilTime::getHour() const
{
	return milHours;
}

Time MilTime::getStandHr()
{
	int timeHour = milHours / 100;
	int timeMin = milHours % 100;
	int timeSec = milSeconds;

	if (timeHour > 12)
		timeHour = timeHour - 12;

	Time temp(timeHour, timeMin, timeSec);
	temp.simplifyTime();
	return temp;
}

