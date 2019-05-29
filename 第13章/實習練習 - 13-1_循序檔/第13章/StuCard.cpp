#include "StuCard.h"

StuCard::StuCard()
{
}

void StuCard::stuCard(string name1, bool sex, double score1, double score2, double score3)
{
	strcpy_s(this->name, name1.c_str());
	this->sex = sex;
	this->scoreAry[0] = score1;
	this->scoreAry[1] = score2;
	this->scoreAry[2] = score3;
}

void StuCard::setName(string &name1)
{
	strcpy_s(this->name, name1.c_str());
	//cloudjudge要用strcpy(name ,n.c_str())才可執行
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

void StuCard::writeToFile()
{
	fstream binaryio;
	binaryio.open("object.dat", ios::out);
	if (binaryio.fail()) {
		cout << "file does not exist";
		return;
	}

	StuCard stucard[5];
	stucard[0].stuCard("Jerry", 1, 80.0, 70.0, 90.0);
	stucard[1].stuCard("John", 1, 85.0, 77.0, 95.0);
	stucard[2].stuCard("Mary", 0, 83.0, 75.0, 70.0);
	stucard[3].stuCard("Tom", 1, 73.0, 95.0, 67.0);
	stucard[4].stuCard("Claire", 0, 88.0, 79.0, 71.0);
	for (int i = 0; i < 5; i++) {
		binaryio.write(reinterpret_cast<char*>(&stucard[i]), sizeof(StuCard));
	}

	binaryio.close();
}


void StuCard::readFromFile()
{
	fstream binaryio;
	binaryio.open("object.dat", ios::in);
	if (binaryio.fail()) {
		cout << "file does not exist";
		return;
	}
	StuCard newStudent;

	for (int i = 0; i < 5; i++) {
		binaryio.read(reinterpret_cast<char*>(&newStudent), sizeof(StuCard));
		newStudent.printCard();
	}

	binaryio.close();
}