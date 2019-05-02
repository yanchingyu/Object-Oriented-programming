#include "Student.h"

Student::Student()
{
	name = "";
	score = 1;
}

Student::Student(string newName, Date newBirthDay, int newScore)
{
	name = newName;
	birthDay = newBirthDay;
	score = newScore;
}

void Student::setName(string newName)
{
	name = newName;
}

void Student::setBirthDay(Date newBirthDay)
{
	birthDay = newBirthDay;
}

void Student::setScore(int newScore)
{
	score = newScore;
}

string Student::getName()
{
	return name;
}

Date Student::getBirthDay()
{
	return birthDay;
}

int Student::getScore()
{
	return score;
}

void Student::print()
{
	cout << name << " ";
	birthDay.print();
	cout << " " << score << endl;
}
