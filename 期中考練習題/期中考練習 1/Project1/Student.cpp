#include "Student.h"

Student::Student()
{
	name = "";
	score = 1;
}

Student::Student(string newName, int newScore)
{
	name = newName;
	score = newScore;
}

void Student::setName(string newName)
{
	name = newName;
}

void Student::setScore(int newScore)
{
	score = newScore;
}

string Student::getName()
{
	return name;
}

int Student::getScore()
{
	return score;
}
