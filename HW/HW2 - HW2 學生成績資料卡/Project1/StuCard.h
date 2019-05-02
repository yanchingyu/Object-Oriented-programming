#ifndef STUCARD_H
#define STUCARD_H

#include "Date.h"

class StuCard {
private:
	string name;
	bool sex;
	double scoreAry[3];
	Date birthDay;
public:
	void setName(string name);
	void setSex(bool sex);
	void setScore(int th, double score);
	void setDate(Date birthDay);

	string getName();
	bool getSex();
	double getScore(int th);
	Date getDate();

	double average();
	int getAge(int year);
	void printCard();
};
#endif 