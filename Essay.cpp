#include "Essay.h"

//Constructor:
Essay::Essay(int grammar, int spelling, int correctLength, int content)
{
	this->grammar = grammar;
	this->spelling = spelling;
	this->correctLength = correctLength;
	this->content = content;
}

//Getters:
int Essay::getGrammar() const
{
	return grammar;
}

int Essay::getSpelling() const
{
	return spelling;
}

int Essay::getCorrectLength() const
{
	return correctLength;
}

int Essay::getContnet() const
{
	return content;
}

char Essay::getEssayGrade()
{
	double totalPointsEarned = grammar + spelling + correctLength + content;
	this->setScore(totalPointsEarned);
	return getLetterGrade();
}