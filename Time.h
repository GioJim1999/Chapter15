#pragma once
class Time
{
protected:
	int hours;
	int min;
	int sec;

public:
	//Constructors:
	Time();
	Time(int h, int m, int s);

	//Getters:
	int getHours() const;
	int getMin() const;
	int getSec() const;
	void simplifyTime();
};

