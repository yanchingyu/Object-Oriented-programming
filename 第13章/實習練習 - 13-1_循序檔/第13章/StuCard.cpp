#include "StuCard.h"

StuCard::StuCard()
{
}

void StuCard::stuCard(string name1, bool sex, double score1, double score2, double score3)
{
	this->name = new string(name1);
	this->sex = sex;
	this->scoreAry[0] = score1;
	this->scoreAry[1] = score2;
	this->scoreAry[2] = score3;
}

void StuCard::setName(string name1)
{
	this->name = new string(name1);
}

void StuCard::setSex(bool sex)
{
	this->sex = sex;
}

void StuCard::setScore(int th, double score)
{
	this->scoreAry[th] = score;
}

string StuCard::getName()
{
	return *name;
}

bool StuCard::getSex()
{
	return sex;
}

double StuCard::getScore(int th)
{
	return scoreAry[th];
}

void StuCard::printCard()
{
	cout << fixed << setprecision(1);
	cout << getName() << " ";
	cout << getSex() << " ";
	for (int i = 0; i < 3; i++) {
		cout << getScore(i) << " ";
	}
	cout << endl;
}

void StuCard::writeToFile(fstream &out)
{
	out.write(reinterpret_cast<char*>(this), sizeof(StuCard));
}

void StuCard::readFromFile(fstream &in)
{
	in.read(reinterpret_cast<char*>(this), sizeof(StuCard));
	
}