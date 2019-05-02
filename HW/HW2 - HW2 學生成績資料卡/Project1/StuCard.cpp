#include "StuCard.h"

void StuCard::setName(string name)
{
	this->name = name;
}

void StuCard::setSex(bool sex)
{
	this->sex = sex;
}

void StuCard::setScore(int th, double score)
{
		this->scoreAry[th] = score;
}

void StuCard::setDate(Date birthDay)
{
	this->birthDay = birthDay;
}

string StuCard::getName()
{
	return name;
}

bool StuCard::getSex()
{
	return sex;
}

double StuCard::getScore(int th)
{
	return scoreAry[th];
}

Date StuCard::getDate()
{
	return birthDay;
}

double StuCard::average()
{
	double total = 0;
	for (int i = 0; i < 3; i++) {
		total += scoreAry[i];
	}
	return total / 3;
}

int StuCard::getAge(int year)
{
	
	return 2018-year;
}

void StuCard::printCard()
{
	cout << getName() << ", ";
	cout << getSex() << ", ";
	for (int i = 0; i < 3; i++) {
		cout << getScore(i) << ", ";
	}
	birthDay.print();
	cout << ", ";
	cout << average() << ", ";
	cout << getAge(birthDay.getYear());
	cout << endl;
}
