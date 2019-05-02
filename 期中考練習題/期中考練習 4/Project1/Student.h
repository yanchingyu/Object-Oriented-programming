#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Student {
private:
	string name;
	Date birthDay;
	int score;
public:
	Student();
	Student(string, Date, int);

	void setName(string);
	void setBirthDay(Date);
	void setScore(int);

	string getName();
	Date getBirthDay();
	int getScore();

	void print();
};
#endif 