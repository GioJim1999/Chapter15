#include "Time.h"
Time::Time()
{
	hours = 0;
	min = 0;
	sec = 0;
}

Time::Time(int h, int m, int s)
{
	hours = h;
	min = m;
	sec = s;
}

int Time::getHours() const
{
	return hours;
}

int Time::getMin() const
{
	return min;
}

int Time::getSec() const
{
	return sec;
}

void Time::simplifyTime()
{
	if (sec > 60)
	{
		min += sec / 60;
		sec = sec % 60;
	}
	if (min > 60)
	{
		hours += min / 60;
		min = min % 60; 
	}
}