#include "Student.h"


Student::Student()
{
	name = "";
	score = 1;
}

Student::Student(string newName, Date newBirthday, int newScore)
{
	name = newName;
	birthDay = newBirthday;
	score = newScore;
}

void Student::setName(string newName)
{
	name = newName;
}

void Student::setDate(Date newBirthday)
{
	birthDay = newBirthday;
}

void Student::setScore(int newScore)
{
	score = newScore;
}

string Student::getName() const
{
	return name;
}

Date Student::getDate() const
{
	return birthDay;
}

int Student::getScore() const
{
	return score;
}

void Student::print()
{
	cout << name << " ";
	birthDay.print();
	cout << " " << score << endl;
}
