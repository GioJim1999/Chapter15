#include "GradedActivity.h"

//Constructor
GradedActivity::GradedActivity()
{
	letter = ' ';
	score = 0.0;
}

void GradedActivity::determineGrade()
{
	if (score >= 90)
		letter = 'A';
	else if (score >= 80 && score <= 89)
		letter = 'B';
	else if (score >= 70 && score <= 79)
		letter = 'C';
	else if (score >= 60 && score <= 69)
		letter = 'D';
	else
		letter = 'F';
}

void GradedActivity::setScore(double s)
{
	score = s;
	determineGrade();
}

double GradedActivity::getScore() const
{
	return score;
}

char GradedActivity::getLetterGrade() const
{
	return letter;
}