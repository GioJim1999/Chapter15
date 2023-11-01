#pragma once
#include "GradedActivity.h"
class Essay : public GradedActivity
{
private:
	int grammar;
	int spelling;
	int correctLength;
	int content;

public:
	//Constructor:
	Essay(int grammar, int spelling, int correctLength, int content);

	//Getters:
	int getGrammar() const;
	int getSpelling() const;
	int getCorrectLength() const;
	int getContnet() const;

	char getEssayGrade();
};

