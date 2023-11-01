#pragma once
class GradedActivity
{
protected:
	char letter;
	double score;
	void determineGrade();

public:
	//Default Constructor
	GradedActivity();


	//Setters:
	void setScore(double s);

	//Getters:
	double getScore() const;

	char getLetterGrade() const;
};

